/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMAssociatedMessageChatItem.h>
#import <IMCore/IMVisibleAssociatedMessageHost.h>

@class NSArray, NSAttributedString, NSString;

@interface IMMessageEditChatItem : IMAssociatedMessageChatItem <IMVisibleAssociatedMessageHost> {

	NSArray* _visibleAssociatedMessageChatItems;

}

@property (nonatomic,retain,readonly) NSAttributedString * editedBody; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=_setVisibleAssociatedMessageChatItems:,nonatomic,retain) NSArray * visibleAssociatedMessageChatItems;              //@synthesize visibleAssociatedMessageChatItems=_visibleAssociatedMessageChatItems - In the implementation block
-(NSArray *)visibleAssociatedMessageChatItems;
-(void)_setVisibleAssociatedMessageChatItems:(id)arg1 ;
-(NSAttributedString *)editedBody;
@end

