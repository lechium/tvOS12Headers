/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSLink.h>

@protocol IDSLinkDelegate;
@class NSString;

@interface IDSTCPLink : NSObject <IDSLink> {

	int _addressFamily;
	BOOL _isSSL;
	IDSTCPConnection_* _conns;
	/*^block*/id _getPacketLength;
	IDSTCPLinkCounter_ _counters;
	IDSTCPLinkCounter_ _previousCounters;
	double _previousReportTime;
	NSString* _cbuuid;
	NSString* _deviceUniqueID;
	id<IDSLinkDelegate> _delegate;
	id<IDSLinkDelegate> _alternateDelegate;
	unsigned long long _state;

}

@property (nonatomic,readonly) BOOL isSSL;                                         //@synthesize isSSL=_isSSL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * cbuuid;                                              //@synthesize cbuuid=_cbuuid - In the implementation block
@property (retain) NSString * deviceUniqueID;                                      //@synthesize deviceUniqueID=_deviceUniqueID - In the implementation block
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long headerOverhead; 
@property (__weak) id<IDSLinkDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<IDSLinkDelegate> alternateDelegate;                          //@synthesize alternateDelegate=_alternateDelegate - In the implementation block
-(unsigned long long)sendPacketBufferArray:(/*function pointer*/void**)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(IDSTCPConnection_*)_getIDSTCPConnection:(SCD_Struct_ID4*)arg1 ;
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
-(id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 isSSL:(BOOL)arg3 getPacketLength:(/*^block*/id)arg4 ;
-(long long)getPacketLength:(SCD_Struct_ID4*)arg1 isChannelData:(BOOL*)arg2 ;
-(BOOL)connect:(int)arg1 localAddress:(sockaddr_in*)arg2 portRange:(unsigned short)arg3 remoteAddress:(sockaddr_in*)arg4 clientUUID:(unsigned char)arg5 completionHandler:(/*^block*/id)arg6 ;
-(BOOL)disconnect:(sockaddr_in*)arg1 remoteAddress:(sockaddr_in*)arg2 ;
-(void)processIncomingPacket:(SCD_Struct_ID4*)arg1 ;
-(BOOL)isSSL;
-(void)setDeviceUniqueID:(NSString *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IDSLinkDelegate>)arg1 ;
-(unsigned long long)state;
-(id<IDSLinkDelegate>)delegate;
-(void)invalidate;
@end

