#ifndef org_apache_lucene_search_spell_PlainTextDictionary_H
#define org_apache_lucene_search_spell_PlainTextDictionary_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class Reader;
    class IOException;
  }
  namespace lang {
    class Class;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class Dictionary;
        }
        namespace suggest {
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
        namespace spell {

          class PlainTextDictionary : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a227449bf251faf1,
              mid_init$_b2f3c57f5e6eb3f2,
              mid_init$_636077fee54d306c,
              mid_getEntryIterator_58c408dcc07c62ab,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PlainTextDictionary(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PlainTextDictionary(const PlainTextDictionary& obj) : ::java::lang::Object(obj) {}

            PlainTextDictionary(const ::java::io::InputStream &);
            PlainTextDictionary(const ::java::io::Reader &);
            PlainTextDictionary(const ::java::nio::file::Path &);

            ::org::apache::lucene::search::suggest::InputIterator getEntryIterator() const;
          };
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
        namespace spell {
          extern PyType_Def PY_TYPE_DEF(PlainTextDictionary);
          extern PyTypeObject *PY_TYPE(PlainTextDictionary);

          class t_PlainTextDictionary {
          public:
            PyObject_HEAD
            PlainTextDictionary object;
            static PyObject *wrap_Object(const PlainTextDictionary&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
