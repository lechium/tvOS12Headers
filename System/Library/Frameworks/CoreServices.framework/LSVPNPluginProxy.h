/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSBundleProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface LSVPNPluginProxy : LSBundleProxy <NSSecureCoding>
+(id)VPNPluginProxyForIdentifier:(id)arg1 ;
+(id)VPNPluginProxyForIdentifier:(id)arg1 withContext:(LSContext*)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)_initWithBundleIdentifier:(id)arg1 withContext:(LSContext*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

