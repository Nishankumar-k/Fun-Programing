# run_python.py
from fpdf import FPDF
import subprocess

class RunPythonPDF(FPDF):
    def __init__(self):
        super().__init__()

    def button_function(self, x, y, w, h, txt, tag):
        self.rect(x, y, w, h)
        self.text(x + w / 2, y + h / 2, txt)
        self.set_user_vars({'tag': tag})
        self.add_link(x, y, w, h, self.button_click_handler)

    def button_click_handler(self, x, y):
        tag = self.get_user_vars()['tag']
        if tag == 'run_python':
            subprocess.Popen(['python', 'hello.py'])

pdf = RunPythonPDF()
pdf.add_page()
pdf.set_xy(50, 50)
pdf.button_function(0, 0, 100, 30, 'Run Python', 'run_python')
pdf.output('run_python.pdf')