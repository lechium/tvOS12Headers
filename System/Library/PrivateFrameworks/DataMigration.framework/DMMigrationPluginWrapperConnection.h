/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DMXPCConnection;

@interface DMMigrationPluginWrapperConnection : NSObject {

	DMXPCConnection* _connection;

}
+(id)connection;
-(void)runPluginAtPath:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleMessage:(id)arg1 ;
-(int)pid;
-(id)init;
-(void)invalidate;
-(void)resume;
@end

