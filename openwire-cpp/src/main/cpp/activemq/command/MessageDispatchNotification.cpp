/*
* Copyright 2006 The Apache Software Foundation or its licensors, as
* applicable.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#include "activemq/command/MessageDispatchNotification.hpp"

using namespace apache::activemq::command;

/*
 *
 *  Command and marshalling code for OpenWire format for MessageDispatchNotification
 *
 *
 *  NOTE!: This file is autogenerated - do not modify!
 *         if you need to make a change, please see the Groovy scripts in the
 *         activemq-core module
 *
 */
MessageDispatchNotification::MessageDispatchNotification()
{
    this->consumerId = NULL ;
    this->destination = NULL ;
    this->deliverySequenceId = 0 ;
    this->messageId = NULL ;
}

MessageDispatchNotification::~MessageDispatchNotification()
{
}

unsigned char MessageDispatchNotification::getDataStructureType()
{
    return MessageDispatchNotification::TYPE ; 
}

        
p<ConsumerId> MessageDispatchNotification::getConsumerId()
{
    return consumerId ;
}

void MessageDispatchNotification::setConsumerId(p<ConsumerId> consumerId)
{
    this->consumerId = consumerId ;
}

        
p<ActiveMQDestination> MessageDispatchNotification::getDestination()
{
    return destination ;
}

void MessageDispatchNotification::setDestination(p<ActiveMQDestination> destination)
{
    this->destination = destination ;
}

        
long long MessageDispatchNotification::getDeliverySequenceId()
{
    return deliverySequenceId ;
}

void MessageDispatchNotification::setDeliverySequenceId(long long deliverySequenceId)
{
    this->deliverySequenceId = deliverySequenceId ;
}

        
p<MessageId> MessageDispatchNotification::getMessageId()
{
    return messageId ;
}

void MessageDispatchNotification::setMessageId(p<MessageId> messageId)
{
    this->messageId = messageId ;
}

int MessageDispatchNotification::marshal(p<IMarshaller> marshaller, int mode, p<IOutputStream> ostream) throw (IOException)
{
    int size = 0 ;

    size += BaseCommand::marshal(marshaller, mode, ostream) ; 
    size += marshaller->marshalObject(consumerId, mode, ostream) ; 
    size += marshaller->marshalObject(destination, mode, ostream) ; 
    size += marshaller->marshalLong(deliverySequenceId, mode, ostream) ; 
    size += marshaller->marshalObject(messageId, mode, ostream) ; 
    return size ;
}

void MessageDispatchNotification::unmarshal(p<IMarshaller> marshaller, int mode, p<IInputStream> istream) throw (IOException)
{
    BaseCommand::unmarshal(marshaller, mode, istream) ; 
    consumerId = p_cast<ConsumerId>(marshaller->unmarshalObject(mode, istream)) ; 
    destination = p_cast<ActiveMQDestination>(marshaller->unmarshalObject(mode, istream)) ; 
    deliverySequenceId = (marshaller->unmarshalLong(mode, istream)) ; 
    messageId = p_cast<MessageId>(marshaller->unmarshalObject(mode, istream)) ; 
}
