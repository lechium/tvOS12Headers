/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRCoreUtilsPairingSession.h>

@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession
+(id)pairingManager;
+(BOOL)systemPairingAvailable;
+(id)globalPairingQueue;
-(id)removePeer;
-(id)updatePeer;
-(id)updateMediaRemotePairedDevice:(id)arg1 ;
-(id)pairedPeerDevices;
-(NSMutableDictionary*)mediaRemotePairedDevices;
-(void*)_createPeerDeviceFromPairedPeer:(id)arg1 ;
-(id)initializePairingSession:(PairingSessionPrivateRef)arg1 ;
-(BOOL)shouldAutoRetryPairingExchange:(id)arg1 ;
-(id)addPeer;
-(id)pairedPeerDevice;
-(id)pairedPeerFromPeerDevice:(void*)arg1 ;
-(BOOL)shouldRetry;
@end

