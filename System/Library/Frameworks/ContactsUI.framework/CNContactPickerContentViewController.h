/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNContactNavigationControllerDelegate.h>
#import <libobjc.A.dylib/CNContactPickerContentViewController.h>

@protocol CNContactPickerContentDelegate;
@class CNContactNavigationController, CNContactStoreDataSource, NSMutableArray, NSArray, NSString, NSPredicate, UINavigationController;

@interface CNContactPickerContentViewController : UIViewController <CNContactNavigationControllerDelegate, CNContactPickerContentViewController> {

	BOOL _clientWantsSingleContact;
	BOOL _clientWantsSingleProperty;
	BOOL _clientWantsMultipleContacts;
	BOOL _clientWantsMultipleProperties;
	BOOL _clientHasContactsAccess;
	BOOL _hidesSearchableSources;
	BOOL _onlyRealContacts;
	BOOL _allowsEditing;
	BOOL _allowsCancel;
	BOOL _hidesPromptInLandscape;
	id<CNContactPickerContentDelegate> _delegate;
	CNContactNavigationController* _contactNavigationController;
	CNContactStoreDataSource* _dataSource;
	NSMutableArray* _contactProperties;
	NSArray* _displayedPropertyKeys;
	long long _cardActions;
	NSString* _prompt;
	NSString* _bannerTitle;
	NSString* _bannerValue;
	NSPredicate* _predicateForEnablingContact;
	NSPredicate* _predicateForSelectionOfContact;
	NSPredicate* _predicateForSelectionOfProperty;

}

@property (nonatomic,retain) CNContactNavigationController * contactNavigationController;              //@synthesize contactNavigationController=_contactNavigationController - In the implementation block
@property (nonatomic,retain) CNContactStoreDataSource * dataSource;                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSMutableArray * contactProperties;                                       //@synthesize contactProperties=_contactProperties - In the implementation block
@property (nonatomic,copy) NSArray * displayedPropertyKeys;                                            //@synthesize displayedPropertyKeys=_displayedPropertyKeys - In the implementation block
@property (assign,nonatomic) long long cardActions;                                                    //@synthesize cardActions=_cardActions - In the implementation block
@property (assign,nonatomic) BOOL hidesSearchableSources;                                              //@synthesize hidesSearchableSources=_hidesSearchableSources - In the implementation block
@property (assign,nonatomic) BOOL onlyRealContacts;                                                    //@synthesize onlyRealContacts=_onlyRealContacts - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                       //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsCancel;                                                        //@synthesize allowsCancel=_allowsCancel - In the implementation block
@property (nonatomic,copy) NSString * prompt;                                                          //@synthesize prompt=_prompt - In the implementation block
@property (assign,nonatomic) BOOL hidesPromptInLandscape;                                              //@synthesize hidesPromptInLandscape=_hidesPromptInLandscape - In the implementation block
@property (nonatomic,copy) NSString * bannerTitle;                                                     //@synthesize bannerTitle=_bannerTitle - In the implementation block
@property (nonatomic,copy) NSString * bannerValue;                                                     //@synthesize bannerValue=_bannerValue - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForEnablingContact;                                  //@synthesize predicateForEnablingContact=_predicateForEnablingContact - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForSelectionOfContact;                               //@synthesize predicateForSelectionOfContact=_predicateForSelectionOfContact - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForSelectionOfProperty;                              //@synthesize predicateForSelectionOfProperty=_predicateForSelectionOfProperty - In the implementation block
@property (assign,nonatomic) BOOL clientWantsSingleContact;                                            //@synthesize clientWantsSingleContact=_clientWantsSingleContact - In the implementation block
@property (assign,nonatomic) BOOL clientWantsSingleProperty;                                           //@synthesize clientWantsSingleProperty=_clientWantsSingleProperty - In the implementation block
@property (assign,nonatomic) BOOL clientWantsMultipleContacts;                                         //@synthesize clientWantsMultipleContacts=_clientWantsMultipleContacts - In the implementation block
@property (assign,nonatomic) BOOL clientWantsMultipleProperties;                                       //@synthesize clientWantsMultipleProperties=_clientWantsMultipleProperties - In the implementation block
@property (assign,nonatomic) BOOL clientHasContactsAccess;                                             //@synthesize clientHasContactsAccess=_clientHasContactsAccess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CNContactPickerContentDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController; 
+(id)descriptorForContactPropertiesSupportingPredicateEvaluation;
-(NSString *)bannerTitle;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)setCardActions:(long long)arg1 ;
-(NSPredicate *)predicateForSelectionOfContact;
-(NSPredicate *)predicateForSelectionOfProperty;
-(void)setPredicateForSelectionOfProperty:(NSPredicate *)arg1 ;
-(void)invalidateSelectionAnimated:(BOOL)arg1 ;
-(NSArray *)displayedPropertyKeys;
-(NSPredicate *)predicateForEnablingContact;
-(void)setPredicateForEnablingContact:(NSPredicate *)arg1 ;
-(long long)cardActions;
-(BOOL)hidesSearchableSources;
-(void)setHidesSearchableSources:(BOOL)arg1 ;
-(BOOL)onlyRealContacts;
-(void)setOnlyRealContacts:(BOOL)arg1 ;
-(BOOL)allowsCancel;
-(BOOL)hidesPromptInLandscape;
-(void)setHidesPromptInLandscape:(BOOL)arg1 ;
-(NSString *)bannerValue;
-(void)setBannerValue:(NSString *)arg1 ;
-(void)contactNavigationControllerDidComplete:(id)arg1 ;
-(void)contactNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)contactNavigationController:(id)arg1 presentContactViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)contactNavigationControllerShouldShowContactsOnKeyCommands:(id)arg1 ;
-(BOOL)contactNavigationController:(id)arg1 canSelectContact:(id)arg2 ;
-(BOOL)contactNavigationController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)contactNavigationController:(id)arg1 shouldShowCardForContact:(id)arg2 ;
-(BOOL)contactNavigationController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(BOOL)clientHasContactsAccess;
-(CNContactNavigationController *)contactNavigationController;
-(id)_validatePredicatesWithError:(id*)arg1 ;
-(void)setClientWantsSingleContact:(BOOL)arg1 ;
-(void)setClientWantsSingleProperty:(BOOL)arg1 ;
-(void)setClientWantsMultipleContacts:(BOOL)arg1 ;
-(void)setClientWantsMultipleProperties:(BOOL)arg1 ;
-(void)setClientHasContactsAccess:(BOOL)arg1 ;
-(BOOL)clientWantsMultipleContacts;
-(BOOL)clientWantsMultipleProperties;
-(void)setContactNavigationController:(CNContactNavigationController *)arg1 ;
-(void)_updatePromptWithViewSize:(CGSize)arg1 transitionCoordinator:(id)arg2 ;
-(void)setContactProperties:(NSMutableArray *)arg1 ;
-(BOOL)clientWantsSingleContact;
-(void)_selectedContact:(id)arg1 ;
-(BOOL)clientWantsSingleProperty;
-(void)_selectedProperty:(id)arg1 ;
-(void)_selectedProperties:(id)arg1 ;
-(void)_selectedContacts:(id)arg1 ;
-(id)descriptorsForKeysRequiredByDelegate;
-(NSMutableArray *)contactProperties;
-(void)setDisplayedPropertyKeys:(NSArray *)arg1 ;
-(void)setBannerTitle:(NSString *)arg1 ;
-(void)setPredicateForSelectionOfContact:(NSPredicate *)arg1 ;
-(id)init;
-(void)setDelegate:(id<CNContactPickerContentDelegate>)arg1 ;
-(id<CNContactPickerContentDelegate>)delegate;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)invalidate;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(UINavigationController *)navigationController;
-(CNContactStoreDataSource *)dataSource;
-(void)setDataSource:(CNContactStoreDataSource *)arg1 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)setAllowsCancel:(BOOL)arg1 ;
@end

