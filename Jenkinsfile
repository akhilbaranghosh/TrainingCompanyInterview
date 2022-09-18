pipeline {
  agent any
  stages {
    stage('Checkout') {
      steps {
        git(url: 'https://github.com/akhilbaranghosh/TrainingCompanyInterview', branch: 'master')
      }
    }

    stage('Shell Script') {
      steps {
        sh 'ls -a'
      }
    }

  }
}