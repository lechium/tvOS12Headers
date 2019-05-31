/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCListener;

@interface DEDConfiguration : NSObject {

	NSXPCListener* _anonymousListener;

}

@property (retain) NSXPCListener * anonymousListener;              //@synthesize anonymousListener=_anonymousListener - In the implementation block
+(id)sharedInstance;
-(id)deviceClass;
-(unsigned long long)connectionType;
-(id)errorDomain;
-(id)deviceColor;
-(NSXPCListener *)anonymousListener;
-(id)platform;
-(id)deviceName;
-(id)deviceEnclosureColor;
-(id)machServiceName;
-(id)deviceProductType;
-(const char*)loggingSubsystem;
-(id)dedDirectory;
-(void)setAnonymousListener:(NSXPCListener *)arg1 ;
-(id)uniqueDeviceSpecifier;
-(id)classClusterAPIVersion;
-(id)sharedAnonymousListener;
-(void)invalidateTestListeners;
-(id)deviceModel;
-(id)identifier;
@end

