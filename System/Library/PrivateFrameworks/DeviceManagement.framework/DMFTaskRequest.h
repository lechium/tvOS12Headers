/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@interface DMFTaskRequest : CATTaskRequest
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)isPermittedOnPlatform:(unsigned long long)arg1 ;
+(BOOL)isPermittedOnCurrentPlatform;
@end
