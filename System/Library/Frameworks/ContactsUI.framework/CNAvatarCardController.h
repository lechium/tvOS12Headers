/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAvatarCardControllerDelegate;
#import <ContactsUI/ContactsUI-Structs.h>
@class NSArray, UIView, CNAvatarView, CNContactHeaderDisplayView, UIButton, UIGestureRecognizer, UIViewController, CNContact, NSString;

@interface CNAvatarCardController : NSObject {

	BOOL _actionsNeedRefresh;
	BOOL _bypassActionValidation;
	NSArray* _contacts;
	NSArray* _actionCategories;
	id<CNAvatarCardControllerDelegate> _delegate;
	UIView* _sourceView;
	CNAvatarView* _avatarView;
	CNContactHeaderDisplayView* _headerView;
	UIButton* _infoButton;
	UIGestureRecognizer* _rolloverGestureRecognizer;
	CGRect _sourceRect;

}

@property (assign,nonatomic,__weak) CNAvatarView * avatarView;                                //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) CNContactHeaderDisplayView * headerView;                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIButton * infoButton;                                           //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController; 
@property (nonatomic,retain) UIGestureRecognizer * rolloverGestureRecognizer;                 //@synthesize rolloverGestureRecognizer=_rolloverGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL actionsNeedRefresh;                                         //@synthesize actionsNeedRefresh=_actionsNeedRefresh - In the implementation block
@property (assign,nonatomic) BOOL bypassActionValidation;                                     //@synthesize bypassActionValidation=_bypassActionValidation - In the implementation block
@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,retain) NSArray * contacts;                                              //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSArray * actionCategories;                                        //@synthesize actionCategories=_actionCategories - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic,__weak) id<CNAvatarCardControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (nonatomic,retain) UIView * sourceView;                                             //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                               //@synthesize sourceRect=_sourceRect - In the implementation block
+(BOOL)avatarCardEnabled;
+(id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)arg1 ;
+(long long)actionsMode;
+(BOOL)showsWithTapAndHold;
+(long long)avatarCardImplementation;
+(id)descriptorForRequiredKeys;
-(NSArray *)contacts;
-(BOOL)bypassActionValidation;
-(void)setBypassActionValidation:(BOOL)arg1 ;
-(void)showContact:(id)arg1 ;
-(void)setActionCategories:(NSArray *)arg1 ;
-(NSArray *)actionCategories;
-(UIGestureRecognizer *)rolloverGestureRecognizer;
-(void)dismissAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setRolloverGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(BOOL)actionsNeedRefresh;
-(void)setActionsNeedRefresh:(BOOL)arg1 ;
-(id)preparedViewControllerForPresentationWithGestureRecognizer:(id)arg1 ;
-(void)showContact;
-(void)_updateCard;
-(void)presentAnimated:(BOOL)arg1 ;
-(CNAvatarView *)avatarView;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setDelegate:(id<CNAvatarCardControllerDelegate>)arg1 ;
-(id<CNAvatarCardControllerDelegate>)delegate;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(BOOL)isVisible;
-(UIViewController *)presentingViewController;
-(void)dismissAnimated:(BOOL)arg1 ;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(CNContactHeaderDisplayView *)headerView;
-(void)setHeaderView:(CNContactHeaderDisplayView *)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(UIButton *)infoButton;
-(void)setInfoButton:(UIButton *)arg1 ;
-(void)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

