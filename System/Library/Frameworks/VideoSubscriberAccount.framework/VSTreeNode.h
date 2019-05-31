/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSIndexPath, NSArray;

@interface VSTreeNode : NSObject {

	id _representedObject;
	VSTreeNode* _parentNode;
	NSMutableArray* _children;

}

@property (assign,nonatomic,__weak) VSTreeNode * parentNode;                    //@synthesize parentNode=_parentNode - In the implementation block
@property (nonatomic,retain) NSMutableArray * children;                         //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) id representedObject;                            //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * indexPath; 
@property (getter=isLeaf,nonatomic,readonly) BOOL leaf; 
@property (nonatomic,copy,readonly) NSArray * childNodes; 
@property (nonatomic,readonly) NSMutableArray * mutableChildNodes; 
+(id)treeNodeWithRepresentedObject:(id)arg1 ;
+(id)keyPathsForValuesAffectingIndexPath;
+(id)keyPathsForValuesAffectingLeaf;
-(void)setParentNode:(VSTreeNode *)arg1 ;
-(BOOL)isLeaf;
-(void)insertChildNodes:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeChildNodesAtIndexes:(id)arg1 ;
-(id)descendantNodeAtIndexPath:(id)arg1 ;
-(id)_descendantNodesAtDepth:(unsigned long long)arg1 ;
-(void)enumerateDescendantsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSMutableArray *)mutableChildNodes;
-(id)initWithRepresentedObject:(id)arg1 ;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(id)init;
-(NSIndexPath *)indexPath;
-(id)representedObject;
-(VSTreeNode *)parentNode;
-(NSMutableArray *)children;
-(NSArray *)childNodes;
@end

