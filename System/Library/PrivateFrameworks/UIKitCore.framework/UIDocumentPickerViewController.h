/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol UIDocumentPickerDelegate;
@class NSMutableArray, UIViewController, NSArray;

@interface UIDocumentPickerViewController : UIViewController {

	id<UIDocumentPickerDelegate> _weak_delegate;
	NSMutableArray* _securityScopedURLs;
	BOOL _ignoreApplicationEntitlementForImport;
	BOOL _allowsMultipleSelection;
	BOOL _sourceIsManaged;
	id<UIDocumentPickerDelegate> _delegate;
	unsigned long long _documentPickerMode;
	UIViewController* _childViewController;
	NSArray* _uploadURLs;

}

@property (assign,nonatomic) unsigned long long documentPickerMode;                                                                                                                    //@synthesize documentPickerMode=_documentPickerMode - In the implementation block
@property (setter=_setChildViewController:,getter=_childViewController,nonatomic,retain) UIViewController * childViewController;                                                       //@synthesize childViewController=_childViewController - In the implementation block
@property (nonatomic,copy) NSArray * uploadURLs;                                                                                                                                       //@synthesize uploadURLs=_uploadURLs - In the implementation block
@property (nonatomic,retain) NSMutableArray * _securityScopedURLs;                                                                                                                     //@synthesize securityScopedURLs=_securityScopedURLs - In the implementation block
@property (assign,setter=_setIgnoreApplicationEntitlementForImport:,getter=_ignoreApplicationEntitlementForImport,nonatomic) BOOL _ignoreApplicationEntitlementForImport;              //@synthesize ignoreApplicationEntitlementForImport=_ignoreApplicationEntitlementForImport - In the implementation block
@property (assign,setter=_setSourceIsManaged:,getter=_sourceIsManaged,nonatomic) BOOL sourceIsManaged;                                                                                 //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (assign,nonatomic,__weak) id<UIDocumentPickerDelegate> delegate;                                                                                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsMultipleSelection;                                                                                                                             //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UIDocumentPickerDelegate>)arg1 ;
-(id<UIDocumentPickerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)allowsMultipleSelection;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(unsigned long long)documentPickerMode;
-(id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2 ;
-(id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2 ;
-(void)setDocumentPickerMode:(unsigned long long)arg1 ;
-(void)_setSourceIsManaged:(BOOL)arg1 ;
-(void)_setChildViewController:(id)arg1 ;
-(id)_childViewController;
-(id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg1 ;
-(BOOL)_ignoreApplicationEntitlementForImport;
-(void)_setIgnoreApplicationEntitlementForImport:(BOOL)arg1 ;
-(BOOL)_sourceIsManaged;
-(void)_commonInitWithDocumentTypes:(id)arg1 ;
-(void)setUploadURLs:(NSArray *)arg1 ;
-(void)_consumeSandboxExtensionForURL:(id)arg1 ;
-(void)_tellDelegateDocumentPickerWasCancelled;
-(id)initWithURLs:(id)arg1 inMode:(unsigned long long)arg2 ;
-(id)_initWithViewController:(id)arg1 inMode:(unsigned long long)arg2 uploadURLOrNil:(id)arg3 ;
-(void)_callDelegateWithSelectedURLsAndDismiss:(id)arg1 ;
-(void)_didTapCancel;
-(NSMutableArray *)_securityScopedURLs;
-(void)set_securityScopedURLs:(NSMutableArray *)arg1 ;
-(NSArray *)uploadURLs;
@end

