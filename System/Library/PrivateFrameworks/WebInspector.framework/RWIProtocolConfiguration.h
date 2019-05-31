/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RWIProtocolCSSDomainHandler, RWIProtocolDOMDomainHandler, RWIProtocolDOMStorageDomainHandler, RWIProtocolNetworkDomainHandler, RWIProtocolPageDomainHandler;
#import <WebInspector/WebInspector-Structs.h>
@class RWIProtocolCSSDomainEventDispatcher, RWIProtocolConsoleDomainEventDispatcher, RWIProtocolDOMDomainEventDispatcher, RWIProtocolDOMStorageDomainEventDispatcher, RWIProtocolNetworkDomainEventDispatcher, RWIProtocolPageDomainEventDispatcher;

@interface RWIProtocolConfiguration : NSObject {

	AugmentableInspectorController* _controller;
	id<RWIProtocolCSSDomainHandler> _cssHandler;
	RWIProtocolCSSDomainEventDispatcher* _cssEventDispatcher;
	RWIProtocolConsoleDomainEventDispatcher* _consoleEventDispatcher;
	id<RWIProtocolDOMDomainHandler> _domHandler;
	RWIProtocolDOMDomainEventDispatcher* _domEventDispatcher;
	id<RWIProtocolDOMStorageDomainHandler> _domStorageHandler;
	RWIProtocolDOMStorageDomainEventDispatcher* _domStorageEventDispatcher;
	id<RWIProtocolNetworkDomainHandler> _networkHandler;
	RWIProtocolNetworkDomainEventDispatcher* _networkEventDispatcher;
	id<RWIProtocolPageDomainHandler> _pageHandler;
	RWIProtocolPageDomainEventDispatcher* _pageEventDispatcher;

}

@property (setter=setCSSHandler:,nonatomic,retain) id<RWIProtocolCSSDomainHandler> cssHandler; 
@property (nonatomic,readonly) RWIProtocolCSSDomainEventDispatcher * cssEventDispatcher; 
@property (nonatomic,readonly) RWIProtocolConsoleDomainEventDispatcher * consoleEventDispatcher; 
@property (setter=setDOMHandler:,nonatomic,retain) id<RWIProtocolDOMDomainHandler> domHandler; 
@property (nonatomic,readonly) RWIProtocolDOMDomainEventDispatcher * domEventDispatcher; 
@property (setter=setDOMStorageHandler:,nonatomic,retain) id<RWIProtocolDOMStorageDomainHandler> domStorageHandler; 
@property (nonatomic,readonly) RWIProtocolDOMStorageDomainEventDispatcher * domStorageEventDispatcher; 
@property (setter=setNetworkHandler:,nonatomic,retain) id<RWIProtocolNetworkDomainHandler> networkHandler; 
@property (nonatomic,readonly) RWIProtocolNetworkDomainEventDispatcher * networkEventDispatcher; 
@property (setter=setPageHandler:,nonatomic,retain) id<RWIProtocolPageDomainHandler> pageHandler; 
@property (nonatomic,readonly) RWIProtocolPageDomainEventDispatcher * pageEventDispatcher; 
-(RWIProtocolConsoleDomainEventDispatcher *)consoleEventDispatcher;
-(RWIProtocolDOMStorageDomainEventDispatcher *)domStorageEventDispatcher;
-(void)setDOMHandler:(id)arg1 ;
-(void)setNetworkHandler:(id<RWIProtocolNetworkDomainHandler>)arg1 ;
-(void)setPageHandler:(id<RWIProtocolPageDomainHandler>)arg1 ;
-(void)setCSSHandler:(id)arg1 ;
-(void)setDOMStorageHandler:(id)arg1 ;
-(id<RWIProtocolDOMDomainHandler>)domHandler;
-(id<RWIProtocolNetworkDomainHandler>)networkHandler;
-(id<RWIProtocolPageDomainHandler>)pageHandler;
-(id<RWIProtocolCSSDomainHandler>)cssHandler;
-(id<RWIProtocolDOMStorageDomainHandler>)domStorageHandler;
-(RWIProtocolNetworkDomainEventDispatcher *)networkEventDispatcher;
-(RWIProtocolCSSDomainEventDispatcher *)cssEventDispatcher;
-(RWIProtocolDOMDomainEventDispatcher *)domEventDispatcher;
-(RWIProtocolPageDomainEventDispatcher *)pageEventDispatcher;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
-(void)dealloc;
@end

