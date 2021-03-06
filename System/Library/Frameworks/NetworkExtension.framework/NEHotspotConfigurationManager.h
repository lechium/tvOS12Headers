/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NEHotspotConfigurationManager : NSObject
+(id)sharedManager;
-(id)serializeConfiguration:(id)arg1 ;
-(void)applyConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeConfigurationForSSID:(id)arg1 ;
-(void)removeConfigurationForHS20DomainName:(id)arg1 ;
-(void)getConfiguredSSIDsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)errorWithCode:(long long)arg1 ;
@end

