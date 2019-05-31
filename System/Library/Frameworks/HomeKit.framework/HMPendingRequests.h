/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMFUnfairLock, NSMutableArray;

@interface HMPendingRequests : NSObject {

	HMFUnfairLock* _lock;
	NSMutableArray* _contextLists;

}

@property (nonatomic,retain) NSMutableArray * contextLists;              //@synthesize contextLists=_contextLists - In the implementation block
-(void)addCompletionBlock:(id)arg1 forIdentifier:(id)arg2 ;
-(id)removeCompletionBlockForIdentifier:(id)arg1 ;
-(id)removeEventForIdentifier:(id)arg1 ;
-(void)addEvent:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(void)addEvents:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(id)removeEventsForIdentifier:(id)arg1 ;
-(id)retrieveCompletionBlockForIdentifier:(id)arg1 ;
-(void)addApplicationData:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(id)removeTriggerForIdentifier:(id)arg1 ;
-(id)removeAccessoryForIdentifier:(id)arg1 ;
-(id)removeAccessoryDescriptionForIdentifier:(id)arg1 ;
-(id)removeProgressBlockForIdentifier:(id)arg1 ;
-(id)retrieveAccessoryDescriptionForIdentifier:(id)arg1 ;
-(id)retrieveProgressBlockForIdentifier:(id)arg1 ;
-(void)addAccessory:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(void)addAccessoryDescription:(id)arg1 progressBlock:(id)arg2 andCompletionBlock:(id)arg3 forIdentifier:(id)arg4 ;
-(void)addTrigger:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(NSMutableArray *)contextLists;
-(void)_addRequest:(id)arg1 ofType:(long long)arg2 forIdentifier:(id)arg3 ;
-(id)_retrieveRequestOfType:(long long)arg1 forIdentifier:(id)arg2 remove:(BOOL)arg3 ;
-(void)addRequest:(id)arg1 ofType:(long long)arg2 forIdentifier:(id)arg3 ;
-(id)removeRequestOfType:(long long)arg1 forIdentifier:(id)arg2 ;
-(id)retrieveRequestOfType:(long long)arg1 forIdentifier:(id)arg2 ;
-(void)addAction:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(id)removeActionForIdentifier:(id)arg1 ;
-(void)addProgressHandler:(id)arg1 forAccessoryIdentifier:(id)arg2 ;
-(void)addMediaSystemBuilder:(id)arg1 andCompletionBlock:(id)arg2 forIdentifier:(id)arg3 ;
-(id)removeMediaSystemBuilderForIdentifier:(id)arg1 ;
-(void)setContextLists:(NSMutableArray *)arg1 ;
-(id)removeApplicationDataForIdentifier:(id)arg1 ;
-(id)init;
@end

