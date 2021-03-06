/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface TKSmartCardATRInterfaceGroup : NSObject {

	NSNumber* _ABC[3];
	NSNumber* _protocol;

}

@property (nonatomic,readonly) NSNumber * TA; 
@property (nonatomic,readonly) NSNumber * TB; 
@property (nonatomic,readonly) NSNumber * TC; 
@property (nonatomic,readonly) NSNumber * protocol;              //@synthesize protocol=_protocol - In the implementation block
-(id)initWithProtocol:(id)arg1 ;
-(NSNumber *)TA;
-(NSNumber *)TB;
-(NSNumber *)TC;
-(id)parseWithY:(char*)arg1 toProtocol:(id*)arg2 fromSource:(/*^block*/id)arg3 hasNext:(BOOL*)arg4 ;
-(id)description;
-(NSNumber *)protocol;
@end

