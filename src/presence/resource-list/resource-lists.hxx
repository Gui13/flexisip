// Copyright (c) 2005-2011 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD/e, an XML Schema
// to C++ data binding compiler for embedded systems.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
//

#ifndef RESOURCE_LISTS_HXX
#define RESOURCE_LISTS_HXX

#include <xsde/cxx/version.hxx>

#if (XSDE_INT_VERSION != 3020000L)
#error XSD/e runtime version mismatch
#endif

#include <xsde/cxx/config.hxx>

#ifndef XSDE_ENCODING_UTF8
#error the generated code uses the UTF-8 encodingwhile the XSD/e runtime does not (reconfigure the runtime or change the --char-encoding value)
#endif

#ifndef XSDE_STL
#error the generated code uses STL while the XSD/e runtime does not (reconfigure the runtime or add --no-stl)
#endif

#ifndef XSDE_EXCEPTIONS
#error the generated code uses exceptions while the XSD/e runtime does not (reconfigure the runtime or add --no-exceptions)
#endif

#ifndef XSDE_LONGLONG
#error the generated code uses long long while the XSD/e runtime does not (reconfigure the runtime or add --no-long-long)
#endif

#ifdef XSDE_CUSTOM_ALLOCATOR
#error the XSD/e runtime uses custom allocator while the generated code does not (reconfigure the runtime or add --custom-allocator)
#endif

#include <xsde/cxx/pre.hxx>

// Begin prologue.
//
//
// End prologue.

#include <string>
#include <xsde/cxx/hybrid/xml-schema.hxx>
#include <xsde/cxx/hybrid/sequence.hxx>

namespace xml_schema
{
  using ::xsde::cxx::hybrid::any_type;
  typedef ::std::string any_simple_type;

  typedef signed char byte;
  using ::xsde::cxx::hybrid::byte_base;

  typedef unsigned char unsigned_byte;
  using ::xsde::cxx::hybrid::unsigned_byte_base;

  typedef short short_;
  using ::xsde::cxx::hybrid::short_base;

  typedef unsigned short unsigned_short;
  using ::xsde::cxx::hybrid::unsigned_short_base;

  typedef int int_;
  using ::xsde::cxx::hybrid::int_base;

  typedef unsigned int unsigned_int;
  using ::xsde::cxx::hybrid::unsigned_int_base;

  typedef long long long_;
  using ::xsde::cxx::hybrid::long_base;

  typedef unsigned long long unsigned_long;
  using ::xsde::cxx::hybrid::unsigned_long_base;

  typedef long integer;
  using ::xsde::cxx::hybrid::integer_base;

  typedef long non_positive_integer;
  using ::xsde::cxx::hybrid::non_positive_integer_base;

  typedef unsigned long non_negative_integer;
  using ::xsde::cxx::hybrid::non_negative_integer_base;

  typedef unsigned long positive_integer;
  using ::xsde::cxx::hybrid::positive_integer_base;

  typedef long negative_integer;
  using ::xsde::cxx::hybrid::negative_integer_base;

  typedef bool boolean;
  using ::xsde::cxx::hybrid::boolean_base;

  typedef float float_;
  using ::xsde::cxx::hybrid::float_base;

  typedef double double_;
  using ::xsde::cxx::hybrid::double_base;

  typedef double decimal;
  using ::xsde::cxx::hybrid::decimal_base;

  typedef ::std::string string;

  typedef ::std::string normalized_string;

  typedef ::std::string token;

  typedef ::std::string name;

  typedef ::std::string nmtoken;

  typedef ::xsde::cxx::string_sequence nmtokens;

  typedef ::std::string ncname;

  typedef ::std::string language;

  typedef ::std::string id;

  typedef ::std::string idref;

  typedef ::xsde::cxx::string_sequence idrefs;

  typedef ::std::string uri;

  using ::xsde::cxx::qname;

  using ::xsde::cxx::buffer;
  typedef ::xsde::cxx::buffer base64_binary;
  typedef ::xsde::cxx::buffer hex_binary;

  using ::xsde::cxx::time_zone;
  using ::xsde::cxx::date;
  using ::xsde::cxx::date_time;
  using ::xsde::cxx::duration;
  using ::xsde::cxx::gday;
  using ::xsde::cxx::gmonth;
  using ::xsde::cxx::gmonth_day;
  using ::xsde::cxx::gyear;
  using ::xsde::cxx::gyear_month;
  using ::xsde::cxx::time;

  using ::xsde::cxx::hybrid::pod_sequence;
  using ::xsde::cxx::hybrid::fix_sequence;
  using ::xsde::cxx::hybrid::var_sequence;
  using ::xsde::cxx::string_sequence;
  using ::xsde::cxx::hybrid::data_sequence;
}

namespace resource_lists
{
  class display_nameType;
  class display_name;
  class entryType;
  class entry_refType;
  class externalType;
  class listType;
  class list;
  class resource_lists;
}


#include "../xml/xml.hxx"

namespace resource_lists
{
  // display-nameType (fixed-length)
  //
  class display_nameType: public ::std::string
  {
    public:
    display_nameType ();

    display_nameType (const display_nameType&);
    display_nameType& operator= (const display_nameType&);

    ~display_nameType ();

    // lang
    //
    bool
    lang_present () const;

    void
    lang_present (bool);

    const ::namespace_::lang&
    lang () const;

    ::namespace_::lang&
    lang ();

    void
    lang (const ::namespace_::lang&);

    private:
    ::namespace_::lang lang_;
    unsigned char lang_present_;
  };

  // display-name (fixed-length)
  //
  class display_name: public ::resource_lists::display_nameType
  {
    public:
    display_name ();

    display_name (const display_name&);
    display_name& operator= (const display_name&);

    ~display_name ();

    private:
  };

  // entryType (fixed-length)
  //
  class entryType
  {
    public:
    entryType ();

    entryType (const entryType&);
    entryType& operator= (const entryType&);

    ~entryType ();

    // uri
    //
    const ::std::string&
    uri () const;

    ::std::string&
    uri ();

    void
    uri (const ::std::string&);

    // display-name
    //
    bool
    display_name_present () const;

    void
    display_name_present (bool);

    const ::resource_lists::display_name&
    display_name () const;

    ::resource_lists::display_name&
    display_name ();

    void
    display_name (const ::resource_lists::display_name&);

    private:
    ::std::string uri_;
    ::resource_lists::display_name display_name_;
    unsigned char display_name_present_;
  };

  // entry-refType (fixed-length)
  //
  class entry_refType
  {
    public:
    entry_refType ();

    entry_refType (const entry_refType&);
    entry_refType& operator= (const entry_refType&);

    ~entry_refType ();

    // ref
    //
    const ::std::string&
    ref () const;

    ::std::string&
    ref ();

    void
    ref (const ::std::string&);

    // display-name
    //
    bool
    display_name_present () const;

    void
    display_name_present (bool);

    const ::resource_lists::display_nameType&
    display_name () const;

    ::resource_lists::display_nameType&
    display_name ();

    void
    display_name (const ::resource_lists::display_nameType&);

    private:
    ::std::string ref_;
    ::resource_lists::display_nameType display_name_;
    unsigned char display_name_present_;
  };

  // externalType (fixed-length)
  //
  class externalType
  {
    public:
    externalType ();

    externalType (const externalType&);
    externalType& operator= (const externalType&);

    ~externalType ();

    // anchor
    //
    bool
    anchor_present () const;

    void
    anchor_present (bool);

    const ::std::string&
    anchor () const;

    ::std::string&
    anchor ();

    void
    anchor (const ::std::string&);

    // display-name
    //
    bool
    display_name_present () const;

    void
    display_name_present (bool);

    const ::resource_lists::display_nameType&
    display_name () const;

    ::resource_lists::display_nameType&
    display_name ();

    void
    display_name (const ::resource_lists::display_nameType&);

    private:
    ::std::string anchor_;
    unsigned char anchor_present_;
    ::resource_lists::display_nameType display_name_;
    unsigned char display_name_present_;
  };

  // listType (variable-length)
  //
  class listType
  {
    private:
    listType (const listType&);
    listType& operator= (const listType&);

    public:
    listType ();

    ~listType ();

    // name
    //
    bool
    name_present () const;

    void
    name_present (bool);

    const ::std::string&
    name () const;

    ::std::string&
    name ();

    void
    name (const ::std::string&);

    // display-name
    //
    bool
    display_name_present () const;

    void
    display_name_present (bool);

    const ::resource_lists::display_nameType&
    display_name () const;

    ::resource_lists::display_nameType&
    display_name ();

    void
    display_name (const ::resource_lists::display_nameType&);

    // sequence (variable-length)
    //
    class sequence_type
    {
      public:
      sequence_type ();

      ~sequence_type ();

      private:
      sequence_type (const sequence_type&);
      sequence_type& operator= (const sequence_type&);

      public:
      // choice
      //
      enum choice_arm_tag
      {
        list_tag,
        external_tag,
        entry_tag,
        entry_ref_tag
      };

      choice_arm_tag
      choice_arm () const;

      void
      choice_arm (choice_arm_tag);

      // list
      //
      const ::resource_lists::list&
      list () const;

      ::resource_lists::list&
      list ();

      void
      list (::resource_lists::list*);

      // external
      //
      const ::resource_lists::externalType&
      external () const;

      ::resource_lists::externalType&
      external ();

      void
      external (const ::resource_lists::externalType&);

      // entry
      //
      const ::resource_lists::entryType&
      entry () const;

      ::resource_lists::entryType&
      entry ();

      void
      entry (const ::resource_lists::entryType&);

      // entry-ref
      //
      const ::resource_lists::entry_refType&
      entry_ref () const;

      ::resource_lists::entry_refType&
      entry_ref ();

      void
      entry_ref (const ::resource_lists::entry_refType&);

      private:
      union
      {
        ::resource_lists::list* list_;
        union
        {
          size_t align_;
          char data_[sizeof (::resource_lists::externalType)];
        } external_;
        union
        {
          size_t align_;
          char data_[sizeof (::resource_lists::entryType)];
        } entry_;
        union
        {
          size_t align_;
          char data_[sizeof (::resource_lists::entry_refType)];
        } entry_ref_;
      } choice_;
      choice_arm_tag choice_arm_;
    };

    typedef ::xsde::cxx::hybrid::var_sequence< sequence_type > sequence_sequence;
    typedef sequence_sequence::iterator sequence_iterator;
    typedef sequence_sequence::const_iterator sequence_const_iterator;

    const sequence_sequence&
    sequence () const;

    sequence_sequence&
    sequence ();

    private:
    ::std::string name_;
    unsigned char name_present_;
    ::resource_lists::display_nameType display_name_;
    unsigned char display_name_present_;
    sequence_sequence sequence_;
  };

  // list (variable-length)
  //
  class list: public ::resource_lists::listType
  {
    private:
    list (const list&);
    list& operator= (const list&);

    public:
    list ();

    ~list ();

    private:
  };

  // resource-lists (variable-length)
  //
  class resource_lists
  {
    private:
    resource_lists (const resource_lists&);
    resource_lists& operator= (const resource_lists&);

    public:
    resource_lists ();

    ~resource_lists ();

    // sequence (variable-length)
    //
    class sequence_type
    {
      public:
      sequence_type ();

      ~sequence_type ();

      private:
      sequence_type (const sequence_type&);
      sequence_type& operator= (const sequence_type&);

      public:
      // list
      //
      const ::resource_lists::listType&
      list () const;

      ::resource_lists::listType&
      list ();

      void
      list (::resource_lists::listType*);

      private:
      ::resource_lists::listType* list_;
    };

    typedef ::xsde::cxx::hybrid::var_sequence< sequence_type > sequence_sequence;
    typedef sequence_sequence::iterator sequence_iterator;
    typedef sequence_sequence::const_iterator sequence_const_iterator;

    const sequence_sequence&
    sequence () const;

    sequence_sequence&
    sequence ();

    private:
    sequence_sequence sequence_;
  };
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsde/cxx/post.hxx>

#endif // RESOURCE_LISTS_HXX