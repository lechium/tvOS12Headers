/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class CNAvatarView, UILabel;

@interface CNUIPeopleGroupCell : UICollectionViewCell {

	CNAvatarView* _avatarView;
	UILabel* _nameLabel;

}

@property (nonatomic,readonly) CNAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                    //@synthesize nameLabel=_nameLabel - In the implementation block
-(CNAvatarView *)avatarView;
-(UILabel *)nameLabel;
-(id)initWithFrame:(CGRect)arg1 ;
@end

