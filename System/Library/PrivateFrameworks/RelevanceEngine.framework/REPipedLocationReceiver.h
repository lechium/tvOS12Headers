/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESingleton.h>
#import <libobjc.A.dylib/REPipedLocationDonor.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, CLLocation, NSObject, NSString;

@interface REPipedLocationReceiver : RESingleton <REPipedLocationDonor> {

	NSXPCConnection* _connection;
	CLLocation* _location;
	long long _connectionWindowRetainCount;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) CLLocation * location; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_queue_setLocation:(id)arg1 ;
-(void)_queue_setupConnection;
-(void)_queue_clearConnection;
-(id)init;
-(void)dealloc;
-(CLLocation *)location;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setLocation:(CLLocation *)arg1 ;
@end

