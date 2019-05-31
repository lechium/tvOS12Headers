/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface PTPEndDataPacket : NSObject {

	unsigned short _operationCode;
	unsigned _transactionID;
	NSData* _data;

}
-(id)initWithTCPBuffer:(void*)arg1 ;
-(id)contentForTCP;
-(id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned)arg2 ;
-(id)initWithUSBBuffer:(void*)arg1 ;
-(unsigned short)operationCode;
-(id)contentForUSB;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 andData:(id)arg3 ;
-(void)setOperationCode:(unsigned short)arg1 ;
-(void)setTransactionID:(unsigned)arg1 ;
-(unsigned)transactionID;
-(void)dealloc;
-(id)description;
-(id)data;
-(void)setData:(id)arg1 ;
@end
