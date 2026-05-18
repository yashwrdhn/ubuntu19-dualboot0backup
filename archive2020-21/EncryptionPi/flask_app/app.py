from flask import Flask, render_template,request


app = Flask(__name__)


@app.route('/')
def home():
    name = 'yash'

    return render_template('home.html',name=name)


@app.route('/app1',methods=["GET","POST"])
def app1():
    if request.method =="GET":
        return render_template('app.html' )
    text = request.form.get('name')
    print(text)
    return render_template('home.html',name=text)


if __name__ == '__main__':
    app.run(debug=True)
