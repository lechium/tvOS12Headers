/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol ACM2SVTrustedDevicesViewControllerDelegate;
@class NSArray, UIColor, UILabel, UIButton, NSLayoutConstraint, UITableView, NSMutableArray, UINavigationController, NSString;

@interface ACM2SVTrustedDevicesViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UINavigationBarDelegate, UINavigationControllerDelegate> {

	id<ACM2SVTrustedDevicesViewControllerDelegate> _delegate;
	NSArray* _trustedDevicesArray;
	UIColor* _textColor;
	UIColor* _labelTextColor;
	UIColor* _backgroundColor;
	long long _suggestedStatusBarStyle;
	UILabel* _emptyLabel;
	UILabel* _headerTitleLabel;
	UILabel* _headerTextLabel;
	UILabel* _footerTextLabel;
	UIButton* _footerButton;
	NSLayoutConstraint* _tableConstraint;
	UITableView* _trustedDevicesListView;
	long long _selectedDeviceIndex;
	NSMutableArray* _imageDownloadsInProgress;
	UINavigationController* _navigationController;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) UILabel * emptyLabel;                                                 //@synthesize emptyLabel=_emptyLabel - In the implementation block
@property (nonatomic,retain) UILabel * headerTitleLabel;                                           //@synthesize headerTitleLabel=_headerTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * headerTextLabel;                                            //@synthesize headerTextLabel=_headerTextLabel - In the implementation block
@property (nonatomic,retain) UILabel * footerTextLabel;                                            //@synthesize footerTextLabel=_footerTextLabel - In the implementation block
@property (nonatomic,retain) UIButton * footerButton;                                              //@synthesize footerButton=_footerButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tableConstraint;                                 //@synthesize tableConstraint=_tableConstraint - In the implementation block
@property (nonatomic,retain) UITableView * trustedDevicesListView;                                 //@synthesize trustedDevicesListView=_trustedDevicesListView - In the implementation block
@property (assign,nonatomic) long long selectedDeviceIndex;                                        //@synthesize selectedDeviceIndex=_selectedDeviceIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageDownloadsInProgress;                            //@synthesize imageDownloadsInProgress=_imageDownloadsInProgress - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                        //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                     //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) id<ACM2SVTrustedDevicesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSArray * trustedDevicesArray;                                                  //@synthesize trustedDevicesArray=_trustedDevicesArray - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * labelTextColor;                                             //@synthesize labelTextColor=_labelTextColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) long long suggestedStatusBarStyle;                                    //@synthesize suggestedStatusBarStyle=_suggestedStatusBarStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLabelTextColor:(UIColor *)arg1 ;
-(UIColor *)labelTextColor;
-(UIButton *)footerButton;
-(void)disableControls:(BOOL)arg1 ;
-(void)setSuggestedStatusBarStyle:(long long)arg1 ;
-(void)resetWithDeviceList:(id)arg1 ;
-(void)presentWithParentViewController:(id)arg1 deviceList:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)cancelAction:(id)arg1 ;
-(double)navigationBarHeight;
-(long long)suggestedStatusBarStyle;
-(void)setImageDownloadsInProgress:(NSMutableArray *)arg1 ;
-(void)setTrustedDevicesArray:(NSArray *)arg1 ;
-(UITableView *)trustedDevicesListView;
-(void)setTrustedDevicesListView:(UITableView *)arg1 ;
-(void)setEmptyLabel:(UILabel *)arg1 ;
-(void)setHeaderTitleLabel:(UILabel *)arg1 ;
-(void)setHeaderTextLabel:(UILabel *)arg1 ;
-(void)setFooterTextLabel:(UILabel *)arg1 ;
-(void)setFooterButton:(UIButton *)arg1 ;
-(BOOL)isLegacyStyle;
-(void)sendAction:(id)arg1 ;
-(id)labelWithText:(id)arg1 font:(id)arg2 ;
-(UILabel *)emptyLabel;
-(UILabel *)headerTitleLabel;
-(UILabel *)headerTextLabel;
-(UILabel *)footerTextLabel;
-(id)footerButtonWithText:(id)arg1 ;
-(NSArray *)trustedDevicesArray;
-(double)tableHeight;
-(void)setTableConstraint:(NSLayoutConstraint *)arg1 ;
-(void)stopImageDownloads;
-(CGSize)sizeOfString:(id)arg1 withFont:(id)arg2 widthConstraints:(double)arg3 ;
-(void)unableReceiveMessagesTextDidTap:(id)arg1 ;
-(void)setSelectedDeviceIndex:(long long)arg1 ;
-(NSLayoutConstraint *)tableConstraint;
-(long long)selectedDeviceIndex;
-(void)startIconDownloadForDevice:(id)arg1 forIndexPath:(id)arg2 ;
-(NSMutableArray *)imageDownloadsInProgress;
-(void)buildConstraints;
-(void)buildHorizontalConstraints;
-(void)buildVerticalConstraints;
-(void)dealloc;
-(void)setDelegate:(id<ACM2SVTrustedDevicesViewControllerDelegate>)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id<ACM2SVTrustedDevicesViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(UIColor *)backgroundColor;
-(void)reset;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(UINavigationController *)navigationController;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)completionBlock;
-(void)setNavigationController:(UINavigationController *)arg1 ;
@end

