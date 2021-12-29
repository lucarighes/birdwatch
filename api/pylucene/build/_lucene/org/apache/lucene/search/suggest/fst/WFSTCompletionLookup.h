#ifndef org_apache_lucene_search_suggest_fst_WFSTCompletionLookup_H
#define org_apache_lucene_search_suggest_fst_WFSTCompletionLookup_H

#include "org/apache/lucene/search/suggest/Lookup.h"

namespace java {
  namespace util {
    class Collection;
    class Set;
    class List;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
    class CharSequence;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class Directory;
        class DataOutput;
      }
      namespace util {
        class Accountable;
        class BytesRef;
      }
      namespace search {
        namespace suggest {
          class Lookup$LookupResult;
          class InputIterator;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {

            class WFSTCompletionLookup : public ::org::apache::lucene::search::suggest::Lookup {
             public:
              enum {
                mid_init$_a9516587cd7033fe,
                mid_init$_6967b937aecb3b0a,
                mid_build_bf225d6cde09eeb7,
                mid_get_02b63332574637fb,
                mid_getChildResources_d4dfbf7a26ff41df,
                mid_getCount_2e5ae9edcb9b072f,
                mid_load_8d76187aa69e280c,
                mid_lookup_b158b62b42de2509,
                mid_ramBytesUsed_2e5ae9edcb9b072f,
                mid_store_a9f4986a27ef0adc,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit WFSTCompletionLookup(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              WFSTCompletionLookup(const WFSTCompletionLookup& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              WFSTCompletionLookup(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &);
              WFSTCompletionLookup(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, jboolean);

              void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
              ::java::lang::Object get(const ::java::lang::CharSequence &) const;
              ::java::util::Collection getChildResources() const;
              jlong getCount() const;
              jboolean load(const ::org::apache::lucene::store::DataInput &) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
              jlong ramBytesUsed() const;
              jboolean store(const ::org::apache::lucene::store::DataOutput &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {
            extern PyType_Def PY_TYPE_DEF(WFSTCompletionLookup);
            extern PyTypeObject *PY_TYPE(WFSTCompletionLookup);

            class t_WFSTCompletionLookup {
            public:
              PyObject_HEAD
              WFSTCompletionLookup object;
              static PyObject *wrap_Object(const WFSTCompletionLookup&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
