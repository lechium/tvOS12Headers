/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssistantServices/AssistantServices-Structs.h>
@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject {

	CFArrayRef _contextProviders;
	CPDistributedMessagingCenter* _center;

}
+(id)defaultContextManager;
-(void)_startListening;
-(void)nothing;
-(void)_collateContextsIntoArray:(id)arg1 ;
-(void)_shutdownServer;
-(id)_serverName;
-(id)_collateContexts;
-(void)startCenter:(id)arg1 ;
-(void)_stopListening;
-(BOOL)addContextProvider:(id)arg1 ;
-(void)removeContextProvider:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
