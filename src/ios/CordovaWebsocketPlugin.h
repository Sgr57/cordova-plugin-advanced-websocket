#import <Cordova/CDV.h>
#import "SRWebSocket.h"


@interface CordovaWebsocketPlugin : CDVPlugin {
    NSMutableDictionary* webSockets;
}

- (void)wsConnect:(CDVInvokedUrlCommand*)command;
- (void)wsAddListeners:(CDVInvokedUrlCommand*)command;
- (void)wsSend:(CDVInvokedUrlCommand*)command;
- (void)wsClose:(CDVInvokedUrlCommand*)command;

@end
