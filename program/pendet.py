import cv2
import numpy as np

# Define a function to detect pen
def detect_pen(frame, lower_color_range, upper_color_range):
    # Convert the frame to HSV color space
    hsv_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
    
    # Create a mask based on the color range
    mask = cv2.inRange(hsv_frame, lower_color_range, upper_color_range)
    
    # Find contours in the mask
    contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    
    # Iterate over the contours to find the pen
    for contour in contours:
        # Calculate the contour area
        area = cv2.contourArea(contour)
        
        # Filter out small areas (adjust this threshold based on your requirement)
        if area > 1000:
            # Draw a bounding box around the pen
            x, y, w, h = cv2.boundingRect(contour)
            cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)
            cv2.putText(frame, 'Pen', (x, y - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)

    return frame

# Define the main function
def main():
    # Define the color range for pen detection (in HSV color space)
    # Adjust these ranges based on the color of your pen
    lower_color_range = np.array([100, 100, 100])  # Lower range for the pen color
    upper_color_range = np.array([140, 255, 255])  # Upper range for the pen color

    # Open the laptop's default camera
    cap = cv2.VideoCapture(0)
    
    if not cap.isOpened():
        print("Error: Unable to open the camera.")
        return
    
    # Loop to continuously capture frames
    while True:
        # Capture a frame
        ret, frame = cap.read()
        
        if not ret:
            print("Error: Unable to capture a frame.")
            break
        
        # Detect pen in the frame
        frame_with_pen = detect_pen(frame, lower_color_range, upper_color_range)
        
        # Display the frame with pen detection
        cv2.imshow('Pen Detection', frame_with_pen)
        
        # Break the loop if 'q' key is pressed
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
    
    # Release the camera and close the windows
    cap.release()
    cv2.destroyAllWindows()

# Run the main function
if __name__ == '__main__':
    main()
