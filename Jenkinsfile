pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                script {
                    sh 'g++ -o output ash.cpp'
                }
            }
        }

        stage('Test') {
            steps {
                script {
                    sh './output'
                }
            }
        }

        stage('Deploy') {
            steps {
                echo 'Deploying...'
            }
        }
    }

    post {
        failure {
            echo 'pipeline failed'
        }
    }
}