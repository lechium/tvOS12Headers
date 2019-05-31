/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSYConnectionDelegate;
@class PSYOptions, NSXPCConnection;

@interface PSYConnection : NSObject {

	BOOL _valid;
	id<PSYConnectionDelegate> _delegate;
	PSYOptions* _options;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) PSYOptions * options;                                   //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                           //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<PSYConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
-(void)startSync;
-(void)startSyncWithOptions:(id)arg1 ;
-(id)remoteConnection;
-(id)init;
-(void)setDelegate:(id<PSYConnectionDelegate>)arg1 ;
-(id<PSYConnectionDelegate>)delegate;
-(PSYOptions *)options;
-(void)setOptions:(PSYOptions *)arg1 ;
-(BOOL)isValid;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end
