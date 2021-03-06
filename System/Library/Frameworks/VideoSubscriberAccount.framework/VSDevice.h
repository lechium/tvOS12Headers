/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@interface VSDevice : NSObject {

	/*function pointer*/void* _copyAnswer;

}

@property (assign,nonatomic) /*function pointer*/void* copyAnswer;                                       //@synthesize copyAnswer=_copyAnswer - In the implementation block
@property (getter=isRunningAnInternalBuild,nonatomic,readonly) BOOL runningAnInternalBuild; 
@property (getter=isRunningACustomerBuild,nonatomic,readonly) BOOL runningACustomerBuild; 
@property (nonatomic,readonly) unsigned long long deviceType; 
+(BOOL)_getMobileGestaltBoolean:(CFStringRef)arg1 withCopyAnswer:(/*function pointer*/void*)arg2 ;
+(BOOL)_runningAnInternalBuildWithCopyAnswer:(/*function pointer*/void*)arg1 ;
+(BOOL)_runningACustomerBuildWithCopyAnswer:(/*function pointer*/void*)arg1 ;
+(unsigned long long)_deviceTypeWithCopyAnswer:(/*function pointer*/void*)arg1 ;
+(id)currentDevice;
-(BOOL)isRunningAnInternalBuild;
-(/*function pointer*/void*)copyAnswer;
-(BOOL)isRunningACustomerBuild;
-(void)setCopyAnswer:(/*function pointer*/void*)arg1 ;
-(unsigned long long)deviceType;
-(id)accountDeletionConfirmationMessageForIdentityProviderDisplayName:(id)arg1 ;
-(id)developerIdentityProviderDeletionConfirmationMessage;
-(id)init;
@end

