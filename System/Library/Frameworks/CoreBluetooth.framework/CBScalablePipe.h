/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CBScalablePipeManager, CBCentral, CBPeer, NSString, NSInputStream, NSOutputStream;

@interface CBScalablePipe : NSObject {

	CBScalablePipeManager* _pipeManager;
	int _socket;
	BOOL _reliablePipe;
	CBCentral* _central;
	CBPeer* _peer;
	NSString* _name;
	long long _type;
	long long _priority;
	long long _mtu;
	NSInputStream* _input;
	NSOutputStream* _output;
	void* _channel;

}

@property (nonatomic,readonly) CBCentral * central;                  //@synthesize central=_central - In the implementation block
@property (nonatomic,readonly) CBPeer * peer;                        //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long priority;                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) long long mtu;                        //@synthesize mtu=_mtu - In the implementation block
@property (nonatomic,readonly) BOOL reliablePipe;                    //@synthesize reliablePipe=_reliablePipe - In the implementation block
@property (nonatomic,readonly) NSInputStream * input;                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) NSOutputStream * output;              //@synthesize output=_output - In the implementation block
@property (nonatomic,readonly) void* channel;                        //@synthesize channel=_channel - In the implementation block
-(void)setOrphan;
-(id)initWithPipeManager:(id)arg1 info:(id)arg2 ;
-(BOOL)reliablePipe;
-(void*)channel;
-(CBPeer *)peer;
-(NSOutputStream *)output;
-(CBCentral *)central;
-(long long)mtu;
-(void)dealloc;
-(NSString *)name;
-(id)description;
-(long long)type;
-(long long)priority;
-(NSInputStream *)input;
@end

