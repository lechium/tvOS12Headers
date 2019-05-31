/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FAFamilyCircleRequestConnectionProvider.h>

@protocol FAFamilyCircleRequestConnectionFactory;
@class NSXPCConnection, NSLock, NSString;

@interface _FAFamilyCircleRequestConnectionProvider : NSObject <FAFamilyCircleRequestConnectionProvider> {

	id<FAFamilyCircleRequestConnectionFactory> _factory;
	NSXPCConnection* _connection;
	NSLock* _lock;

}

@property (nonatomic,retain) id<FAFamilyCircleRequestConnectionFactory> factory;              //@synthesize factory=_factory - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSLock * lock;                                                 //@synthesize lock=_lock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createResumedConnectionWithFactory:(id)arg1 provider:(id)arg2 ;
+(id)sharedInstance;
-(void)connectionWasInvalidated:(id)arg1 ;
-(id)initWithConnectionFactory:(id)arg1 ;
-(void)connectionWasInterrupted:(id)arg1 ;
-(id)serviceConnection;
-(id)init;
-(void)dealloc;
-(NSLock *)lock;
-(id<FAFamilyCircleRequestConnectionFactory>)factory;
-(void)setFactory:(id<FAFamilyCircleRequestConnectionFactory>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

