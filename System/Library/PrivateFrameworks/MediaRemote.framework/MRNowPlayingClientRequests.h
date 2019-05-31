/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, _MRNowPlayingClientProtobuf, NSArray;

@interface MRNowPlayingClientRequests : NSObject <MRNowPlayingClientState> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _playerClients;
	_MRNowPlayingClientProtobuf* _client;
	NSArray* _nowPlayingClients;

}

@property (nonatomic,readonly) _MRNowPlayingClientProtobuf * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) NSArray * nowPlayingClients;                       //@synthesize nowPlayingClients=_nowPlayingClients - In the implementation block
-(id)initWithClient:(id)arg1 ;
-(void)restoreNowPlayingClientState;
-(NSArray *)nowPlayingClients;
-(id)playerClients;
-(id)nowPlayingPlayerClientRequestsForPlayerPath:(id)arg1 ;
-(id)existingNowPlayingPlayerClientRequestsForPlayerPath:(id)arg1 ;
-(void)removePlayer:(id)arg1 ;
-(_MRNowPlayingClientProtobuf *)client;
-(id)debugDescription;
@end

