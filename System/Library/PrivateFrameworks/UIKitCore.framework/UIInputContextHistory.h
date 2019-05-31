/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TIInputContextHistory, NSSet, NSString;

@interface UIInputContextHistory : NSObject {

	TIInputContextHistory* _tiInputContextHistory;

}

@property (nonatomic,readonly) NSSet * senderIdentifiers; 
@property (nonatomic,readonly) NSSet * recipientIdentifiers; 
@property (nonatomic,readonly) TIInputContextHistory * tiInputContextHistory;              //@synthesize tiInputContextHistory=_tiInputContextHistory - In the implementation block
@property (nonatomic,readonly) NSString * senderIdentifier; 
-(BOOL)isEqual:(id)arg1 ;
-(TIInputContextHistory *)tiInputContextHistory;
-(id)initWithRecipientIdentifiers:(id)arg1 senderIdentifiers:(id)arg2 ;
-(id)initWithRecipientIdentifiers:(id)arg1 senderIdentifier:(id)arg2 ;
-(NSSet *)recipientIdentifiers;
-(NSSet *)senderIdentifiers;
-(void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3 ;
-(id)initWithRecipientIdentifiers:(id)arg1 ;
-(NSString *)senderIdentifier;
-(void)addTextEntry:(id)arg1 timestamp:(id)arg2 ;
@end

