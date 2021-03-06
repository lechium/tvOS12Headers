/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSDService.h>

@interface _LSDDeviceIdentifierService : _LSDService
+(unsigned short)connectionType;
+(void)clearIdentifiersForUninstallationWithContext:(LSContext*)arg1 bundleUnit:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 ;
+(void)generateIdentifiersForInstallationWithContext:(LSContext*)arg1 bundleUnit:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 ;
+(id)vendorNameForDeviceIdentifiersWithContext:(LSContext*)arg1 bundleUnit:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 ;
+(Class)clientClass;
+(id)XPCInterface;
@end

