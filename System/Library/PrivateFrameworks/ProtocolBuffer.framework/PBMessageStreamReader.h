/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSInputStream;

@interface PBMessageStreamReader : NSObject {

	NSInputStream* _stream;
	Class _classOfNextMessage;
	unsigned long long _position;

}

@property (assign) Class classOfNextMessage;                   //@synthesize classOfNextMessage=_classOfNextMessage - In the implementation block
@property (readonly) unsigned long long position;              //@synthesize position=_position - In the implementation block
-(Class)classOfNextMessage;
-(id)initWithStream:(id)arg1 ;
-(void)setClassOfNextMessage:(Class)arg1 ;
-(id)nextMessage;
-(void)dealloc;
-(unsigned long long)position;
@end

