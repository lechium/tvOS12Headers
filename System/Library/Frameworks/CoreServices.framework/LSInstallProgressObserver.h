/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSInstallProgressProtocol.h>

@class NSXPCConnection, NSString;

@interface LSInstallProgressObserver : NSObject <LSInstallProgressProtocol> {

	NSXPCConnection* _connection;

}

@property (assign,nonatomic,__weak) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 ;
-(void)addObserver;
-(void)_lsPing:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)removeObserver;
-(void)sendNotification:(int)arg1 forApplications:(id)arg2 withPlugins:(BOOL)arg3 ;
-(void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2 ;
-(void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 ;
-(void)installationFailedForApplication:(id)arg1 reply:(/*^block*/id)arg2 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

