/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSXPCInterface;

@interface TVCKLocalProcessConnection : NSObject {

	NSString* _serviceName;
	id _exportedObject;
	NSXPCInterface* _exportedInterface;
	NSXPCInterface* _remoteObjectInterface;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (copy,readonly) NSString * serviceName;                                 //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) id exportedObject;                                   //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterface;                  //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface;              //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(id)exportedObject;
-(NSXPCInterface *)remoteObjectInterface;
-(id)removeObjectProxy;
-(void)invalidate;
-(NSXPCInterface *)exportedInterface;
-(void)resume;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setExportedObject:(id)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)serviceName;
-(id)initWithServiceName:(id)arg1 ;
@end
