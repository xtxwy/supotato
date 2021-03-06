//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FMSearchParameter, NSArray, NSMutableArray, NSMutableDictionary, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface FMFrontCategoryViewController : FMBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_categoryTableView;
    FMSearchParameter *_searchParameter;
    NSArray *_initCategories;
    NSMutableArray *_categories;
    unsigned int _currentLevel;
    NSMutableDictionary *_categoriesLevel;
    CDUnknownBlockType _didSelectAction;
    int _categoryViewType;
}

- (void).cxx_destruct;
- (id)_rootCategory;
- (void)algorithmSearchTrackCategories:(id)arg1;
- (void)categoryResponse:(BOOL)arg1 categories:(id)arg2 errMsg:(id)arg3 level:(unsigned int)arg4;
- (void)dealloc;
- (void)deleteRootCategory;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)initNavigationBar;
- (id)initWithCategory:(id)arg1;
- (id)initWithSearchParameter:(id)arg1;
- (void)leftAction:(id)arg1;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)pushListViewController:(id)arg1;
- (void)requestCategory:(id)arg1 level:(unsigned int)arg2;
- (void)setDidSelectAction:(CDUnknownBlockType)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

