/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UAPBIRConverter.h>

@class NSString;

@interface UAPBIRIdentityConverter : NSObject <UAPBIRConverter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerConverter;
-(id)typeString;
-(id)convertPlatformDataToIR:(id)arg1 ;
-(id)convertIRDataToPlatform:(id)arg1 ;
@end

