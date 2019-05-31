/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_parameters, OS_nw_endpoint, OS_nw_path, NPTunnelDelegate, OS_dispatch_data;
#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
@class NSUUID, NSObject, NSMutableDictionary, NSPAppRule, NSDate, NetworkServiceProxyConnectionStats;

@interface NPTunnel : NSObject {

	nw_protocol* _protocol;
	BOOL _persistMetrics;
	BOOL _isTFOProbeSucceeded;
	BOOL _isCancelled;
	BOOL _isReadyForData;
	BOOL _eof;
	BOOL _handledDisconnected;
	int _error;
	NSUUID* _identifier;
	NSObject*<OS_nw_parameters> _parameters;
	NSObject*<OS_nw_endpoint> _endpoint;
	NSObject*<OS_nw_endpoint> _localEndpoint;
	NSObject*<OS_nw_path> _path;
	id<NPTunnelDelegate> _delegate;
	NSMutableDictionary* _flows;
	NSPAppRule* _appRule;
	NSDate* _connectionStartDate;
	NetworkServiceProxyConnectionStats* _stats;
	double _timeIntervalSinceLastUsage;
	double _timeToFirstRequest;
	double _timeToFirstByte;
	long long _connectionState;
	long long _fallbackReason;
	unsigned long long* _timestamps;
	NSObject*<OS_dispatch_data> _savedData;
	void* _idleTimer;

}

@property (assign) BOOL eof;                                                  //@synthesize eof=_eof - In the implementation block
@property (retain) NSObject*<OS_dispatch_data> savedData;                     //@synthesize savedData=_savedData - In the implementation block
@property (assign) void* idleTimer;                                           //@synthesize idleTimer=_idleTimer - In the implementation block
@property (retain) NSObject*<OS_nw_endpoint> localEndpoint;                   //@synthesize localEndpoint=_localEndpoint - In the implementation block
@property (retain) NSObject*<OS_nw_path> path;                                //@synthesize path=_path - In the implementation block
@property (assign) BOOL handledDisconnected;                                  //@synthesize handledDisconnected=_handledDisconnected - In the implementation block
@property (assign) long long connectionState;                                 //@synthesize connectionState=_connectionState - In the implementation block
@property (retain) NSDate * connectionStartDate;                              //@synthesize connectionStartDate=_connectionStartDate - In the implementation block
@property (assign) int error;                                                 //@synthesize error=_error - In the implementation block
@property (assign) long long fallbackReason;                                  //@synthesize fallbackReason=_fallbackReason - In the implementation block
@property (assign) BOOL persistMetrics;                                       //@synthesize persistMetrics=_persistMetrics - In the implementation block
@property (retain) NetworkServiceProxyConnectionStats * stats;                //@synthesize stats=_stats - In the implementation block
@property (assign) double timeToFirstRequest;                                 //@synthesize timeToFirstRequest=_timeToFirstRequest - In the implementation block
@property (assign) double timeToFirstByte;                                    //@synthesize timeToFirstByte=_timeToFirstByte - In the implementation block
@property (assign) BOOL isCancelled;                                          //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign) BOOL isReadyForData;                                       //@synthesize isReadyForData=_isReadyForData - In the implementation block
@property (readonly) NSUUID * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (readonly) nw_protocol* protocol; 
@property (readonly) NSObject*<OS_nw_parameters> parameters;                  //@synthesize parameters=_parameters - In the implementation block
@property (readonly) NSObject*<OS_nw_endpoint> endpoint;                      //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) NSObject*<OS_nw_interface> outputInterface; 
@property (__weak,readonly) id<NPTunnelDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSMutableDictionary * flows;                             //@synthesize flows=_flows - In the implementation block
@property (readonly) NSPAppRule * appRule;                                    //@synthesize appRule=_appRule - In the implementation block
@property (readonly) BOOL canHandleMoreData; 
@property (readonly) unsigned long long initialWindowSize; 
@property (readonly) BOOL isConnectionAlive; 
@property (readonly) double timeIntervalSinceLastUsage;                       //@synthesize timeIntervalSinceLastUsage=_timeIntervalSinceLastUsage - In the implementation block
@property (readonly) unsigned long long* timestamps;                          //@synthesize timestamps=_timestamps - In the implementation block
@property (readonly) BOOL isTFOProbeSucceeded;                                //@synthesize isTFOProbeSucceeded=_isTFOProbeSucceeded - In the implementation block
+(void)initializeProtocol;
-(void)setStats:(NetworkServiceProxyConnectionStats *)arg1 ;
-(NetworkServiceProxyConnectionStats *)stats;
-(void)write:(id)arg1 ;
-(void)setLocalEndpoint:(NSObject*<OS_nw_endpoint>)arg1 ;
-(NSObject*<OS_nw_endpoint>)localEndpoint;
-(NSPAppRule *)appRule;
-(unsigned long long)initialWindowSize;
-(BOOL)addNewFlow:(id)arg1 ;
-(void)destroyConnection;
-(void)cancelConnection;
-(BOOL)hasFlow:(unsigned long long)arg1 ;
-(void)closeFlow:(id)arg1 ;
-(BOOL)isConnectionAlive;
-(id)createConnectionInfo;
-(NSDate *)connectionStartDate;
-(void)setConnectionStartDate:(NSDate *)arg1 ;
-(long long)fallbackReason;
-(BOOL)isTFOProbeSucceeded;
-(double)timeToFirstByte;
-(double)timeIntervalSinceLastUsage;
-(void)setFallbackReason:(long long)arg1 ;
-(id)handleFlowClosed:(unsigned long long)arg1 withFallbackReason:(long long)arg2 ;
-(void)sendData:(id)arg1 toClientFlow:(unsigned long long)arg2 ;
-(void)increaseWindowSizeForFlow:(unsigned long long)arg1 byBytes:(unsigned long long)arg2 ;
-(BOOL)flowIsFirstFlow:(id)arg1 ;
-(BOOL)persistMetrics;
-(void)acknowledgeData:(unsigned long long)arg1 sentToFlow:(id)arg2 ;
-(NSObject*<OS_dispatch_data>)savedData;
-(void)setSavedData:(NSObject*<OS_dispatch_data>)arg1 ;
-(long long)sendData:(id)arg1 forFlow:(id)arg2 ;
-(void)handleFlowUsedTunnel;
-(void)handleFallbackForFlow:(id)arg1 ;
-(double)timeToFirstRequest;
-(void)setTimeToFirstByte:(double)arg1 ;
-(BOOL)isReadyForData;
-(unsigned long long)maxDataSendSizeForFlow:(id)arg1 ;
-(void)handleConnected;
-(void)setTimeToFirstRequest:(double)arg1 ;
-(void)handleDisconnected;
-(NSObject*<OS_nw_interface>)outputInterface;
-(void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 ;
-(BOOL)canHandleMoreData;
-(void)handleCanHandleMoreData;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 delegate:(id)arg5 ;
-(void)setPersistMetrics:(BOOL)arg1 ;
-(void)setIsReadyForData:(BOOL)arg1 ;
-(NSMutableDictionary *)flows;
-(void)handleInputAvailable;
-(void)handleReadData:(nw_frame_array_s*)arg1 ;
-(void)handleEOF;
-(void)handleDataWrittenWithError:(int)arg1 ;
-(void)writeInitialData;
-(unsigned long long)allocateFlowID;
-(void*)idleTimer;
-(void)setIdleTimer:(void*)arg1 ;
-(void)startIdleTimer;
-(void)teardownOutputHandler;
-(BOOL)eof;
-(void)handleConnectionIsDisconnected;
-(void)handleOutputAvailable;
-(void)setEof:(BOOL)arg1 ;
-(BOOL)handledDisconnected;
-(void)setHandledDisconnected:(BOOL)arg1 ;
-(unsigned long long*)timestamps;
-(void)setIsCancelled:(BOOL)arg1 ;
-(void)setConnectionState:(long long)arg1 ;
-(long long)connectionState;
-(void)removeFlow:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSUUID *)identifier;
-(id<NPTunnelDelegate>)delegate;
-(BOOL)start;
-(BOOL)isCancelled;
-(NSObject*<OS_nw_path>)path;
-(void)setPath:(NSObject*<OS_nw_path>)arg1 ;
-(NSObject*<OS_nw_parameters>)parameters;
-(int)error;
-(void)setError:(int)arg1 ;
-(NSObject*<OS_nw_endpoint>)endpoint;
-(nw_protocol*)protocol;
@end

