/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol MPMediaPickerControllerDelegate;
@class _UIAsyncInvocation, MPRemoteMediaPickerController, NSString;

@interface MPMediaPickerController : UIViewController {

	_UIAsyncInvocation* _cancelRequest;
	id _modalContext;
	MPRemoteMediaPickerController* _remoteViewController;
	BOOL _allowsPickingMultipleItems;
	BOOL _showsCloudItems;
	BOOL _showsItemsWithProtectedAssets;
	BOOL _picksSingleCollectionEntity;
	unsigned _watchCompatibilityVersion;
	unsigned long long _mediaTypes;
	id<MPMediaPickerControllerDelegate> _delegate;
	NSString* _prompt;

}

@property (nonatomic,readonly) unsigned long long mediaTypes;                                  //@synthesize mediaTypes=_mediaTypes - In the implementation block
@property (assign,nonatomic,__weak) id<MPMediaPickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsPickingMultipleItems; 
@property (assign,nonatomic) BOOL showsCloudItems; 
@property (assign,nonatomic) BOOL showsItemsWithProtectedAssets; 
@property (nonatomic,copy) NSString * prompt;                                                  //@synthesize prompt=_prompt - In the implementation block
+(void)preheatMediaPicker;
-(id)initWithMediaTypes:(unsigned long long)arg1 ;
-(void)_requestRemoteViewController;
-(void)_addRemoteView;
-(void)_sendSettingsToService;
-(void)_pickerDidPickItems:(id)arg1 ;
-(void)_pickerDidCancel;
-(BOOL)_hasAddedRemoteView;
-(id)_serviceViewControllerProxy;
-(void)_forceDismissal;
-(void)remoteMediaPickerDidPickMediaItems:(id)arg1 ;
-(void)remoteMediaPickerDidCancel;
-(BOOL)allowsPickingMultipleItems;
-(void)setAllowsPickingMultipleItems:(BOOL)arg1 ;
-(BOOL)showsCloudItems;
-(void)setShowsCloudItems:(BOOL)arg1 ;
-(BOOL)showsItemsWithProtectedAssets;
-(void)setShowsItemsWithProtectedAssets:(BOOL)arg1 ;
-(BOOL)picksSingleCollectionEntity;
-(void)setPicksSingleCollectionEntity:(BOOL)arg1 ;
-(unsigned)watchCompatibilityVersion;
-(void)setWatchCompatibilityVersion:(unsigned)arg1 ;
-(void)_resetRemoteViewController;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MPMediaPickerControllerDelegate>)arg1 ;
-(id<MPMediaPickerControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(unsigned long long)mediaTypes;
@end

