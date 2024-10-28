import React from 'react';
import PropTypes from 'prop-types';

class ErrorBoundary extends React.Component {
    constructor(props) {
        super(props);
        this.state = { hasError: false };
    }

    static getDerivedStateFromError(error) {
        // On met à jour l'état pour afficher l'interface de secours en cas d'erreur
        return { hasError: true };
    }

    componentDidCatch(error, errorInfo) {
        // On peut loguer l'erreur pour un suivi externe ici si nécessaire
        console.log('Error caught:', error, errorInfo);
    }

    render() {
        if (this.state.hasError) {
            return <h1>Une erreur s'est produite.</h1>;
        }

        return this.props.children;
    }
}

// Validation des props
ErrorBoundary.propTypes = {
    children: PropTypes.node.isRequired,
};

export default ErrorBoundary;
