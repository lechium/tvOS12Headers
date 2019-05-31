/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@interface IDSSocketPairAckMessage : IDSSocketPairMessage {

	unsigned _sequenceNumber;

}

@property (nonatomic,readonly) unsigned sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
-(unsigned)sequenceNumber;
-(id)initWithSequenceNumber:(unsigned)arg1 ;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(unsigned char)command;
@end
