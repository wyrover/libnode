// Copyright (c) 2012 Plenluno All rights reserved.

#ifndef LIBNODE_NET_H_
#define LIBNODE_NET_H_

#include <libnode/net/option.h>
#include <libnode/net/socket.h>
#include <libnode/net/server.h>

namespace libj {
namespace node {
namespace net {

Int isIP(String::CPtr ip);

Boolean isIPv4(String::CPtr ip);

Boolean isIPv6(String::CPtr ip);

Socket::Ptr connect(
    JsObject::CPtr options,
    JsFunction::Ptr onConnect = JsFunction::null());

Socket::Ptr connect(
    Int port,
    String::CPtr host = String::null(),
    JsFunction::Ptr onConnect = JsFunction::null());

Socket::Ptr connect(
    String::CPtr path,
    JsFunction::Ptr onConnect = JsFunction::null());

Server::Ptr createServer(
    JsObject::CPtr options = JsObject::null(),
    JsFunction::Ptr onConnection = JsFunction::null());

Socket::Ptr createConnection(
    JsObject::CPtr options,
    JsFunction::Ptr onConnect = JsFunction::null());

Socket::Ptr createConnection(
    Int port,
    String::CPtr host = String::null(),
    JsFunction::Ptr onConnect = JsFunction::null());

Socket::Ptr createConnection(
    String::CPtr path,
    JsFunction::Ptr onConnect = JsFunction::null());

}  // namespace net
}  // namespace node
}  // namespace libj

#endif  // LIBNODE_NET_H_
