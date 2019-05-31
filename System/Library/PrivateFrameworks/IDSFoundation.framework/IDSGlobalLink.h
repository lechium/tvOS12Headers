/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSLink.h>
#import <IDSFoundation/IDSLinkDelegate.h>
#import <IDSFoundation/IDSStunCandidatePairDelegate.h>
#import <IDSFoundation/IDSGLSessionManagerDelegate.h>

@protocol IDSLinkDelegate, OS_dispatch_source;
@class IDSUDPLink, IDSTCPLink, NSMutableDictionary, NSObject, NSMutableArray, NSData, NSString, IDSGLSessionManager, IDSGlobalLinkBlocks, IDSCommnatManager;

@interface IDSGlobalLink : NSObject <IDSLink, IDSLinkDelegate, IDSStunCandidatePairDelegate, IDSGLSessionManagerDelegate> {

	IDSUDPLink* _udpLink;
	IDSUDPLink* _udpLinkv6;
	IDSTCPLink* _tcpLink;
	IDSTCPLink* _tcpSSLLink;
	unsigned short _startPort;
	int _portRange;
	id<IDSLinkDelegate> _delegate;
	id<IDSLinkDelegate> _alternateDelegate;
	/*^block*/id _connectReadyHandler;
	/*^block*/id _disconnectCompletionHandler;
	long long _clientType;
	BOOL _isFaceTimeCall;
	BOOL _isMultiway;
	BOOL _forceQuickRelay;
	BOOL _disallowWiFi;
	BOOL _disallowCellular;
	BOOL _preferCellularForCallSetup;
	tagIDSQRSendInfoListRef _sendInfoList;
	char _linkIDCounter;
	double _natMappingTimeout;
	double _inviteSentTime;
	double _inviteRecvTime;
	unsigned _acceptDelayU32;
	double _allocbindStartTime;
	double _allocbindEndTime;
	double _linkConnectTime;
	double _firstClientPacketTime;
	IDSNAT64PrefixCache_Ref _nat64PrefixCache;
	NSMutableDictionary* _tokenToCandidatePairs;
	NSMutableDictionary* _linkIDToCandidatePairs;
	NSMutableDictionary* _channelToCandidatePairs;
	NSMutableDictionary* _startTimeToStunReqID;
	NSMutableDictionary* _tokenToStunReqID;
	IDSSimpleUInt16List* _channelNumberList;
	IDSSimpleUInt16List* _reallocChannelList;
	NSMutableDictionary* _tokenToReallocBlocks;
	NSObject*<OS_dispatch_source> _disconnectTimer;
	NSObject*<OS_dispatch_source> _activityTimer;
	NSMutableArray* _interfaceAddressArray;
	BOOL _isInitiator;
	int _nominateCount;
	NSMutableArray* _localCandidateList;
	NSMutableArray* _remoteCandidateList;
	NSMutableDictionary* _tokenToStunCheckPairs;
	BOOL _enableSKE;
	NSData* _skeData;
	BOOL _recvRemoteSKEData;
	BOOL _delaySessionConnected;
	BOOL _skeComplete;
	double _skeStartTime;
	NSString* _acceptedRelaySessionID;
	NSMutableArray* _nonAcceptedQRSessions;
	IDSGLSessionManager* _sessionManager;
	long long _remoteCapabilityFlag;
	BOOL _delayedConnData;
	int _localConnDataCounter;
	int _remoteConnDataCounter;
	NSMutableArray* _delayedCellInterfaces;
	BOOL _hasPendingAllocation;
	NSMutableArray* _targetedAllocations;
	BOOL _useSecureControlMessage;
	NSData* _controlMessageKey;
	unsigned short _basebandPacketChannelNumber;
	IDSGlobalLinkBlocks* _qraBlocks;
	NSMutableArray* _allocateTimeReportBlocks;
	BOOL _hasPendingSelfAllocation;
	NSMutableArray* _selfAllocateRequestIDs;
	IDSCommnatManager* _commnatManager;
	NSString* _cbuuid;
	NSString* _deviceUniqueID;
	unsigned long long _headerOverhead;
	unsigned long long _state;
	unsigned char _clientUUID[16];
	NSString* _idsSessionID;
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
	unsigned long long _previousBytesSent;
	unsigned long long _previousPacketsSent;
	unsigned long long _previousBytesReceived;
	unsigned long long _previousPacketsReceived;
	double _previousReportTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * cbuuid;                                              //@synthesize cbuuid=_cbuuid - In the implementation block
@property (retain) NSString * deviceUniqueID;                                      //@synthesize deviceUniqueID=_deviceUniqueID - In the implementation block
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long headerOverhead;                            //@synthesize headerOverhead=_headerOverhead - In the implementation block
@property (__weak) id<IDSLinkDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<IDSLinkDelegate> alternateDelegate;                          //@synthesize alternateDelegate=_alternateDelegate - In the implementation block
-(void)startWithOptions:(id)arg1 ;
-(BOOL)link:(id)arg1 didReceivePacket:(SCD_Struct_ID4*)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(unsigned long long)sendPacketBufferArray:(/*function pointer*/void**)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(unsigned long long)sendPacketBuffer:(SCD_Struct_ID4*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2 ;
-(id)copyLinkStatsDict;
-(NSString *)cbuuid;
-(void)setCbuuid:(NSString *)arg1 ;
-(NSString *)deviceUniqueID;
-(NSString *)linkTypeString;
-(unsigned long long)headerOverhead;
-(id<IDSLinkDelegate>)alternateDelegate;
-(void)setAlternateDelegate:(id<IDSLinkDelegate>)arg1 ;
-(void)currentCellularSignalStrength:(int*)arg1 signalStrength:(int*)arg2 signalGrade:(int*)arg3 ;
-(id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(long long)_sendZUDPData:(char*)arg1 dataLength:(unsigned long long)arg2 linkID:(char)arg3 ;
-(void)_recvGenericData:(char*)arg1 dataLength:(unsigned long long)arg2 linkID:(char)arg3 ;
-(void)_invalidateCandidatePairs:(id)arg1 ;
-(void)_stopDisconnectTimer;
-(void)_stopActivityTimer;
-(id)_createInterfaceAddressArray:(unsigned long long)arg1 wantsWiFi:(BOOL)arg2 wantsCellular:(BOOL)arg3 ;
-(id)_delayProcessingCellularInterfaces:(id)arg1 ;
-(void)_getNAT64PrefixForInterface:(int)arg1 interfaceName:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_parseClientUUID:(id)arg1 ;
-(id)_addSocketAndInterfaceAddress:(unsigned long long)arg1 wantsWiFi:(BOOL)arg2 wantsCellular:(BOOL)arg3 ;
-(BOOL)_isReachableInterface:(id)arg1 interfaceIPVersion:(unsigned long long)arg2 ;
-(BOOL)_hasConnectedCandidatePair;
-(void)connectWithSessionInfo:(id)arg1 interfaceAddress:(id)arg2 joinSession:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_addQRAAWDBlock:(id)arg1 allocateRequestTime:(double)arg2 inferredExternalIP:(unsigned)arg3 stunTransport:(long long)arg4 relayProviderType:(long long)arg5 idsSessionID:(id)arg6 ;
-(void)_sendAllocbindRequestForExtIP:(id)arg1 startTime:(double)arg2 ;
-(long long)_sendStunMessage:(id)arg1 sourceIfIndex:(int)arg2 source:(sockaddr*)arg3 destination:(sockaddr*)arg4 stunTransport:(long long)arg5 token:(id)arg6 ;
-(BOOL)_addCandidate:(id)arg1 isRemoteCandidate:(BOOL)arg2 ;
-(void)_sendAllocbindRequest:(id)arg1 stunMessage:(id)arg2 isRealloc:(BOOL)arg3 ;
-(void)_reportAWDAllocateTime;
-(void)_discardCandidatePairsWithOption:(BOOL)arg1 ;
-(void)_removePacketNotificationFilter;
-(void)_handleDisconnectTimer;
-(void)_sendSessionDisconnectedCommand;
-(void)_startDisconnectTimer;
-(BOOL)_isBetterCandidatePair:(id)arg1 newCandidatePair:(id)arg2 ;
-(void)_nominateCandidatePair:(id)arg1 ;
-(void)_sendUnallocbindRequest:(id)arg1 stunMessage:(id)arg2 ;
-(void)_notifyCandidatePairDisconnected:(id)arg1 ;
-(void)_notifyLinkDisconnectedWithError:(long long)arg1 ;
-(void)_sendCommandMessage:(long long)arg1 stunMessage:(id)arg2 options:(id)arg3 candidatePairToken:(id)arg4 ;
-(void)_sendConnectionDataWithRemovedAddressList:(id)arg1 ;
-(void)_notifyDefaultUnderlyingLinkChanged:(id)arg1 error:(long long)arg2 ;
-(void)_callDisconnectCompletionHandler:(id)arg1 ;
-(BOOL)_isExtIPDiscoveryDone;
-(void)_setChannelToCandidatePair:(id)arg1 localAddress:(sockaddr*)arg2 remoteAddress:(sockaddr*)arg3 channelNumber:(unsigned short)arg4 ;
-(void)_updateDefaultCandidatePair:(id)arg1 ;
-(void)_processXORMappedAddress:(id)arg1 arrivalTime:(double)arg2 ;
-(void)_notifyQRSessionConnected:(id)arg1 ;
-(void)_notifySessionInfoReceived:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 success:(BOOL)arg4 ;
-(void)_setupNewQRLinkIfNecessary:(id)arg1 ;
-(void)_sendSKEDataWithSelectedCandidatePair;
-(double)_startTimeForStunRequest:(id)arg1 ;
-(BOOL)_processIncomingIndicationData:(char*)arg1 length:(int)arg2 candidatePairToken:(id)arg3 arrivalTime:(double)arg4 ;
-(BOOL)_triggerSymptomsWithCandidatePairToken:(id)arg1 subType:(id)arg2 subTypeContext:(id)arg3 duration:(unsigned short)arg4 ;
-(BOOL)_processBindingRequest:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7 ;
-(BOOL)_processBindingResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7 ;
-(BOOL)_processAllocbindResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7 ;
-(BOOL)_processUnallocbindResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7 ;
-(BOOL)_processReallocIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remoteAddress:(sockaddr*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7 ;
-(BOOL)_processDataIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remoteAddress:(sockaddr*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7 ;
-(BOOL)_processGoAwayIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remoteAddress:(sockaddr*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7 ;
-(BOOL)_processDiagnosticIndication:(id)arg1 candidatePairToken:(id)arg2 arrivalTime:(double)arg3 ;
-(void)_removeStunRequest:(id)arg1 ;
-(void)_notifyCandidatePairConnected:(id)arg1 ;
-(void)_processDataOnReallocChannel:(unsigned short)arg1 localAddress:(sockaddr*)arg2 remoteAddress:(sockaddr*)arg3 ;
-(id)_getLink:(int)arg1 stunTransport:(long long)arg2 ;
-(void)_updateSendStatsWithResult:(unsigned long long)arg1 bytesSent:(long long)arg2 packetsSent:(int)arg3 linkID:(char)arg4 token:(id)arg5 useRelay:(BOOL)arg6 isClientData:(BOOL)arg7 sendTime:(double)arg8 ;
-(void)_saveStunRequest:(id)arg1 startTime:(double)arg2 token:(id)arg3 ;
-(BOOL)_hasConnectingRelayCandidatePair;
-(void)_discardSelfAllocateCandidatePairs;
-(BOOL)_skipCommandMessage:(long long)arg1 candidatePair:(id)arg2 timeNow:(double)arg3 ;
-(id)_createCommandData:(long long)arg1 options:(id)arg2 candidatePair:(id)arg3 ;
-(void)_processCommandConnected:(id)arg1 candidatePairToken:(id)arg2 ;
-(void)_processCommandDisconnected:(id)arg1 candidatePairToken:(id)arg2 ;
-(void)_processCommandHeartbeat:(id)arg1 candidatePairToken:(id)arg2 arrivalTime:(double)arg3 ;
-(void)_processCommandConnectionData:(id)arg1 candidatePairToken:(id)arg2 ;
-(void)_processCommandNominate:(id)arg1 candidatePairToken:(id)arg2 ;
-(void)_processCommandZUDPData:(id)arg1 candidatePairToken:(id)arg2 ;
-(void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(void)_discardNonAcceptedCandidatePairs;
-(void)_startActivityTimer;
-(void)_startExtIPDiscovery;
-(void)_selectBetterDefaultCandidatePair:(id)arg1 ;
-(void)_convergeSharedSessions:(id)arg1 ;
-(void)_discardAllCandidatePairs;
-(void)_processRemoteCandidates:(id)arg1 ;
-(void)_setupRelayConnectionForNetworkAddressChanges;
-(void)_updateNominatedCandidatePair:(id)arg1 ;
-(void)_handleActivityTimer;
-(void)_startStunCheck:(id)arg1 ;
-(void)_addStunCheckPair:(id)arg1 isRemoteCandidate:(BOOL)arg2 ;
-(BOOL)_IsExtIPDiscoveryNeeded:(sockaddr*)arg1 candidatePairList:(id)arg2 ;
-(void)_handleSelfAllocationTimeout:(id)arg1 ;
-(BOOL)_requestSelfAllocationForInterfaceAddress:(id)arg1 ;
-(void)_processNewRemoteCandidates:(id)arg1 ;
-(void)_processRemovedRemoteCandidates:(id)arg1 ;
-(void)_sendBindingRequest:(id)arg1 stunMessage:(id)arg2 ;
-(void)_processRemoteLinkUUID:(id)arg1 candidatePair:(id)arg2 ;
-(id)_nextConnectedCandidatePair;
-(void)_selectDefaultCandidatePair;
-(void)_processNewLocalAddressList:(id)arg1 ;
-(void)_processRemovedLocalAddressList:(id)arg1 ;
-(void)_processDelayedCellularInterfaces;
-(unsigned long long)defaultLinkType;
-(void)_reportSessionSetupTime;
-(BOOL)_getPacketBufferSendInfo:(SCD_Struct_ID4*)arg1 channelNumber:(unsigned short*)arg2 transport:(long long*)arg3 ;
-(void)_requestNonUDPRelayAllocation:(long long)arg1 relaySessionID:(id)arg2 ;
-(BOOL)_getSessionParticipants:(id)arg1 relaySessionID:(id)arg2 options:(id)arg3 ;
-(BOOL)_getSessionStreamInfo:(id)arg1 relaySessionID:(id)arg2 options:(id)arg3 ;
-(void)_processReallocChannelData:(SCD_Struct_ID4*)arg1 channelNumber:(unsigned short)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 arrivalTime:(double)arg5 ;
-(BOOL)_processStunPacket:(SCD_Struct_ID4*)arg1 fromDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 arrivalTime:(double)arg4 headerOverhead:(unsigned long long)arg5 ;
-(void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(void)candidatePair:(id)arg1 didReceiveSessionInfo:(id)arg2 success:(BOOL)arg3 ;
-(void)candidatePair:(id)arg1 didReceiveStunErrorResponse:(long long)arg2 errorCode:(unsigned short)arg3 ;
-(void)candidatePair:(id)arg1 didAddQREvent:(id)arg2 ;
-(BOOL)hasReachableInterface:(unsigned long long)arg1 ;
-(void)_handleCommnatResult:(long long)arg1 reflextiveCandidate:(id)arg2 ;
-(void)handleNetworkAddressChanges:(BOOL)arg1 hasIPv6AddressChange:(BOOL)arg2 ;
-(void)handleCellularRATChange;
-(BOOL)remoteHostAwake;
-(void)setAcceptedRelaySession:(id)arg1 options:(id)arg2 ;
-(void)sendSKEData:(id)arg1 ;
-(void)setDefaultUnderlyingLink:(char)arg1 ;
-(void)setPacketNotificationFilter:(char)arg1 uniqueTag:(unsigned)arg2 isEnabled:(BOOL)arg3 ;
-(void)dropIPPackets:(char)arg1 payloadArray:(id)arg2 ;
-(void)updateProtocolQualityOfService:(char)arg1 isGood:(BOOL)arg2 ;
-(void)stopKeepAlive:(id)arg1 ;
-(void)getSessionInfo:(id)arg1 relaySessionID:(id)arg2 requestType:(long long)arg3 options:(id)arg4 ;
-(void)updateSessionParticipants:(id)arg1 relaySessionID:(id)arg2 participants:(id)arg3 ;
-(void)setDeviceUniqueID:(NSString *)arg1 ;
-(void)disconnectWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IDSLinkDelegate>)arg1 ;
-(unsigned long long)state;
-(id<IDSLinkDelegate>)delegate;
-(void)invalidate;
@end

