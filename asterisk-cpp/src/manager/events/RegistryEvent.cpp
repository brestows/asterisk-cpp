/*
 * RegistryEvent.cpp
 *
 *  Created on: Apr 26, 2012
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/RegistryEvent.h"

namespace asteriskcpp {

    RegistryEvent::RegistryEvent(const std::string & values) :
    ManagerEvent(values) {
    }

    RegistryEvent::~RegistryEvent() {
    }

    const std::string& RegistryEvent::getChannelType() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& RegistryEvent::getChannelDriver() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& RegistryEvent::getChannel() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& RegistryEvent::getDomain() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& RegistryEvent::getUsername() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& RegistryEvent::getStatus() const {
        return (getGetterValue(__FUNCTION__));
    }

    const std::string& RegistryEvent::getCause() const {
        return (getGetterValue(__FUNCTION__));
    }
} /* namespace asteriskcpp */
