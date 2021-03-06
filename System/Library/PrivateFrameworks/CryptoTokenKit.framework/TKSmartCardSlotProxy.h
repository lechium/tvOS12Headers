/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKProtocolSmartCardSlotNotification.h>

@class TKSmartCardSlot, NSHashTable;

@interface TKSmartCardSlotProxy : NSObject <TKProtocolSmartCardSlotNotification> {

	TKSmartCardSlot* _slot;
	NSHashTable* _cards;

}

@property (readonly) NSHashTable * cards;              //@synthesize cards=_cards - In the implementation block
-(id)initWithSlot:(id)arg1 ;
-(NSHashTable *)cards;
-(void)notifyWithParameters:(id)arg1 ;
-(void)cardSessionRequested;
@end

