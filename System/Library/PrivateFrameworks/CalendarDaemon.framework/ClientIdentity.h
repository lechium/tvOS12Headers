/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CalendarDaemon/CalendarDaemon-Structs.h>
@class NSString;

@interface ClientIdentity : NSObject {

	int _pid;
	NSString* _bundleIdentifier;
	NSString* _clientName;
	NSString* _codeSigningIdentity;
	SCD_Struct_Cl2 _auditToken;

}

@property (nonatomic,readonly) SCD_Struct_Cl2 auditToken;                        //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientName;                       //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,copy,readonly) NSString * codeSigningIdentity;              //@synthesize codeSigningIdentity=_codeSigningIdentity - In the implementation block
@property (nonatomic,readonly) int pid;                                          //@synthesize pid=_pid - In the implementation block
-(NSString *)codeSigningIdentity;
-(id)initWithAuditToken:(SCD_Struct_Cl2)arg1 ;
-(NSString *)clientName;
-(int)pid;
-(NSString *)bundleIdentifier;
-(id)description;
-(SCD_Struct_Cl2)auditToken;
@end

