#pragma once
#include "windows.h"

namespace visualIDE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAllToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pasteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  undoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  redoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  projectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  compileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  runToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  linkToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  docsToolStripMenuItem;



	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripSplitButton^  toolStripSplitButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;

	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::TabControl^  tabControl1;


	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	private: System::Windows::Forms::ToolStripMenuItem^  downloadFirmwareToolStripMenuItem;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Project"));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->projectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->compileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->runToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->linkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->docsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSplitButton1 = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->downloadFirmwareToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->fileToolStripMenuItem, 
				this->editToolStripMenuItem, this->projectToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(610, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->newToolStripMenuItem, 
				this->openToolStripMenuItem, this->saveAsToolStripMenuItem, this->saveAllToolStripMenuItem, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->newToolStripMenuItem->Text = L"New";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->saveAsToolStripMenuItem->Text = L"Save as...";
			// 
			// saveAllToolStripMenuItem
			// 
			this->saveAllToolStripMenuItem->Name = L"saveAllToolStripMenuItem";
			this->saveAllToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->saveAllToolStripMenuItem->Text = L"Save all";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->copyToolStripMenuItem, 
				this->cutToolStripMenuItem, this->pasteToolStripMenuItem, this->undoToolStripMenuItem, this->redoToolStripMenuItem});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->copyToolStripMenuItem->Text = L"Copy";
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			this->cutToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->cutToolStripMenuItem->Text = L"Cut";
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			this->pasteToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->pasteToolStripMenuItem->Text = L"Paste";
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->undoToolStripMenuItem->Text = L"Undo";
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			this->redoToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->redoToolStripMenuItem->Text = L"Redo";
			// 
			// projectToolStripMenuItem
			// 
			this->projectToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->compileToolStripMenuItem, 
				this->runToolStripMenuItem, this->linkToolStripMenuItem});
			this->projectToolStripMenuItem->Name = L"projectToolStripMenuItem";
			this->projectToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->projectToolStripMenuItem->Text = L"Project";
			// 
			// compileToolStripMenuItem
			// 
			this->compileToolStripMenuItem->Name = L"compileToolStripMenuItem";
			this->compileToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->compileToolStripMenuItem->Text = L"Compile";
			// 
			// runToolStripMenuItem
			// 
			this->runToolStripMenuItem->Name = L"runToolStripMenuItem";
			this->runToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->runToolStripMenuItem->Text = L"Run";
			// 
			// linkToolStripMenuItem
			// 
			this->linkToolStripMenuItem->Name = L"linkToolStripMenuItem";
			this->linkToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->linkToolStripMenuItem->Text = L"Link";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->docsToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// docsToolStripMenuItem
			// 
			this->docsToolStripMenuItem->Name = L"docsToolStripMenuItem";
			this->docsToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->docsToolStripMenuItem->Text = L"Docs";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripProgressBar1});
			this->statusStrip1->Location = System::Drawing::Point(0, 405);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(610, 22);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->toolStripButton1, 
				this->toolStripButton2, this->toolStripSplitButton1, this->toolStripButton3});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(610, 25);
			this->toolStrip1->TabIndex = 4;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"Open";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"Save";
			// 
			// toolStripSplitButton1
			// 
			this->toolStripSplitButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripSplitButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->downloadFirmwareToolStripMenuItem});
			this->toolStripSplitButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripSplitButton1.Image")));
			this->toolStripSplitButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripSplitButton1->Name = L"toolStripSplitButton1";
			this->toolStripSplitButton1->Size = System::Drawing::Size(32, 22);
			this->toolStripSplitButton1->Text = L"NXT";
			// 
			// downloadFirmwareToolStripMenuItem
			// 
			this->downloadFirmwareToolStripMenuItem->Name = L"downloadFirmwareToolStripMenuItem";
			this->downloadFirmwareToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->downloadFirmwareToolStripMenuItem->Text = L"Download Firmware";
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"Compile";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &Form1::toolStripButton3_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(400, 353);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->TabStop = false;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->webBrowser1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(392, 327);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Welcome";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser1->Location = System::Drawing::Point(0, 0);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(392, 327);
			this->webBrowser1->TabIndex = 0;
			this->webBrowser1->TabStop = false;
			this->webBrowser1->Url = (gcnew System::Uri(L"http://shrimpboyho.github.com/openrobot", System::UriKind::Absolute));
			// 
			// treeView1
			// 
			this->treeView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->treeView1->Location = System::Drawing::Point(3, 2);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"Node0";
			treeNode1->Text = L"Project";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) {treeNode1});
			this->treeView1->Size = System::Drawing::Size(208, 354);
			this->treeView1->TabIndex = 6;
			this->treeView1->TabStop = false;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 49);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->treeView1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Size = System::Drawing::Size(610, 356);
			this->splitContainer1->SplitterDistance = 203;
			this->splitContainer1->TabIndex = 5;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 427);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"OpenRobot";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	private: System::Void toolStripButton3_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->toolStripProgressBar1->Value = 100;
			 }
	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				openFile();
			 }
	private: System::Void openFile() {
				 // Displays an OpenFileDialog so the user can select a file.
				 OpenFileDialog ^openFileDialog1 = gcnew OpenFileDialog();
				 openFileDialog1->Title = "Select a source code file";

				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 System::IO::StreamReader ^sr = gcnew
						 System::IO::StreamReader(openFileDialog1->FileName);
					 
					 // Read the file contents into a string
					 String ^buffer = sr->ReadToEnd();
					 sr->Close();

					 // Create a new tab for the file contents
					 TabPage ^tab = gcnew TabPage(System::IO::Path::GetFileName(openFileDialog1->FileName));
					 tab->TabStop = false;
					 
					 // Create a text box, format it, and load it with the file contents
					 RichTextBox ^code = gcnew RichTextBox;
					 code->Anchor = static_cast<AnchorStyles>(AnchorStyles::Bottom | AnchorStyles::Right | AnchorStyles::Left | AnchorStyles::Top);
					 code->Size = tab->Size::get();
					 code->Multiline = true;
					 System::Drawing::Font ^fonty = gcnew System::Drawing::Font("Courier New",13);
					 code->Font::set(fonty);
					 code->Text = buffer;

					 // Add the textbox to the tab
					 tab->Controls->Add(code);

					 // Add the tab to the tab control
					 tabControl1->TabPages->Add(tab);
					 tabControl1->SelectTab(tab);
				 }
			 }

	private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
				 openFile();
			 }
};
}

