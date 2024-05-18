import os
from PyPDF2 import PdfFileWriter, PdfFileReader
from reportlab.pdfgen import canvas

# Create a sample PDF file
pdf = canvas.Canvas("example.pdf")
pdf.drawString(100, 750, "This is a sample PDF file.")
pdf.save()

# Create a Python script as a string
python_code = """
print("Hello, World!")
"""

# Save the Python code to a file
with open("script.py", "w") as f:
    f.write(python_code)

# Attach the Python script to the PDF file
with open("example.pdf", "rb") as f_in:
    with open("output.pdf", "wb") as f_out:
        pdf_writer = PdfFileWriter()
        pdf_reader = PdfFileReader(f_in)
        pdf_writer.addPage(pdf_reader.getPage(0))
        pdf_writer.addAttachment("script.py", open("script.py", "rb").read())
        pdf_writer.write(f_out)