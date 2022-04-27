from flask import Flask, render_template

app = Flask(__name__)


@app.route('/')
def home():
    return render_template('index.html')


@app.route('/basicCalculator')
def basicCalculator():
    return render_template('basicCalculator.html')


@app.route('/OOPCPPCodes')
def OOPCPPCodes():
    return render_template('OOP_CPP_Codes.html')


@app.route('/OOPCPPProject')
def OOPCPPProject():
    return render_template('OOP_CPP_Project.html')


@app.route('/OOPCPPProjectKuldeep')
def OOPCPPProjectKuldeep():
    return render_template('OOP_CPP_Project_Kuldeep.html')


@app.route('/OOPCPPProjectKuldeep')
def DSUProjectKuldeep():
    return render_template('DSU_Project.html')


app.run(debug=True)
