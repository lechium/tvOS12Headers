/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDEphemeralRequest.h>

@class ASDMigrationRequestOptions;

@interface ASDMigrationRequest : ASDEphemeralRequest

@property (nonatomic,copy,readonly) ASDMigrationRequestOptions * options; 
+(long long)requestType;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithOptions:(id)arg1 ;
@end

